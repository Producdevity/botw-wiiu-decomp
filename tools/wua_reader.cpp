#include "zarchive/zarchivereader.h"
#include <algorithm>
#include <array>
#include <fstream>
#include <iostream>
#include <regex>
#include <set>
#include <stdexcept>

namespace {
constexpr uint64_t max_metadata = 64ULL << 20;
constexpr uint64_t max_rpx = 64ULL << 20;
void require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}
template<class T> void read_at(std::ifstream& file, uint64_t offset, T* data, size_t bytes) {
    file.seekg(offset);
    file.read(reinterpret_cast<char*>(data), bytes);
    require(file.good(), "truncated WUA metadata");
}
void validate(const std::filesystem::path& path) {
    using namespace _ZARCHIVE;
    std::ifstream file(path, std::ios::binary);
    require(file.is_open(), "cannot open WUA archive");
    file.seekg(0, std::ios::end);
    auto length = file.tellg();
    require(length > static_cast<std::streamoff>(sizeof(Footer)) &&
            length <= static_cast<std::streamoff>(64ULL << 30), "invalid WUA size (maximum 64 GiB)");
    uint64_t size = static_cast<uint64_t>(length);
    Footer footer;
    read_at(file, size - sizeof footer, &footer, sizeof footer);
    Footer::Deserialize(&footer, &footer);
    require(footer.magic == Footer::kMagic && footer.version == Footer::kVersion1 &&
            footer.totalSize == size, "invalid or truncated WUA footer");
    std::array sections = {footer.sectionCompressedData, footer.sectionOffsetRecords,
        footer.sectionNames, footer.sectionFileTree, footer.sectionMetaDirectory, footer.sectionMetaData};
    uint64_t metadata = 0;
    for (size_t i = 0; i < sections.size(); ++i) {
        auto section = sections[i];
        require(section.offset <= size - sizeof footer &&
                section.size <= size - sizeof footer - section.offset, "invalid WUA section range");
        if (i) {
            require(section.size <= max_metadata - metadata, "WUA metadata exceeds 64 MiB");
            metadata += section.size;
        }
    }
    require(footer.sectionOffsetRecords.size && footer.sectionOffsetRecords.size % sizeof(CompressionOffsetRecord) == 0 &&
            footer.sectionFileTree.size && footer.sectionFileTree.size % sizeof(FileDirectoryEntry) == 0 &&
            footer.sectionNames.size, "invalid WUA metadata sizes");
    std::vector<uint8_t> names(footer.sectionNames.size);
    read_at(file, footer.sectionNames.offset, names.data(), names.size());
    std::vector<FileDirectoryEntry> tree(footer.sectionFileTree.size / sizeof(FileDirectoryEntry));
    read_at(file, footer.sectionFileTree.offset, tree.data(), tree.size() * sizeof(FileDirectoryEntry));
    FileDirectoryEntry::Deserialize(tree.data(), tree.size(), tree.data());
    uint64_t capacity = footer.sectionOffsetRecords.size / sizeof(CompressionOffsetRecord) * ENTRIES_PER_OFFSETRECORD * COMPRESSED_BLOCK_SIZE;
    for (const auto& entry : tree) {
        uint32_t offset = entry.GetNameOffset();
        if (offset != 0x7fffffff) {
            require(offset < names.size(), "invalid WUA name offset");
            uint32_t count = names[offset] & 0x7f;
            if (names[offset] & 0x80) {
                require(offset + 1 < names.size(), "truncated WUA name");
                // Match the pinned reader's extended-name bounds before it touches metadata.
                count |= static_cast<uint16_t>(names[offset]) << 7;
                offset += 2;
            } else ++offset;
            require(count <= names.size() - offset, "invalid WUA name length");
        }
        if (!entry.IsFile()) {
            require(entry.directoryRecord.nodeStartIndex <= tree.size() &&
                    entry.directoryRecord.count <= tree.size() - entry.directoryRecord.nodeStartIndex,
                    "invalid WUA directory range");
        } else {
            require(entry.GetFileOffset() <= capacity && entry.GetFileSize() <= capacity - entry.GetFileOffset(),
                    "invalid WUA file range");
        }
    }
    std::vector<CompressionOffsetRecord> records(footer.sectionOffsetRecords.size / sizeof(CompressionOffsetRecord));
    read_at(file, footer.sectionOffsetRecords.offset, records.data(), records.size() * sizeof(CompressionOffsetRecord));
    CompressionOffsetRecord::Deserialize(records.data(), records.size(), records.data());
    for (const auto& record : records)
        require(record.baseOffset <= footer.sectionCompressedData.size, "invalid WUA compression offset");
}
std::string folded(std::string value) {
    for (char& c : value) if (c >= 'A' && c <= 'Z') c += 'a' - 'A';
    return value;
}
bool safe_name(std::string_view name) {
    return !name.empty() && name != "." && name != ".." &&
        std::all_of(name.begin(), name.end(), [](unsigned char c) { return c >= 32 && c < 127 && c != '/' && c != '\\'; });
}
struct Candidate { std::string path; uint64_t size; ZArchiveNodeHandle node; };
std::vector<ZArchiveReader::DirEntry> entries(ZArchiveReader& reader, ZArchiveNodeHandle node) {
    auto count = reader.GetDirEntryCount(node);
    require(count <= 4096, "WUA directory exceeds 4096 entries");
    std::vector<ZArchiveReader::DirEntry> result;
    std::set<std::string> names;
    for (uint32_t i = 0; i < count; ++i) {
        ZArchiveReader::DirEntry entry;
        require(reader.GetDirEntry(node, i, entry), "invalid WUA directory entry");
        require(safe_name(entry.name), "unsafe WUA directory entry name");
        require(names.insert(folded(std::string(entry.name))).second, "ambiguous WUA directory entry names");
        result.push_back(entry);
    }
    return result;
}
std::vector<Candidate> candidates(ZArchiveReader& reader) {
    std::vector<Candidate> result;
    const std::regex title("[0-9a-fA-F]{16}_v[0-9]{1,6}");
    auto add_code = [&](const std::string& prefix) {
        auto parent = reader.LookUp(prefix, false, true);
        if (!reader.IsDirectory(parent)) return;
        for (auto entry : entries(reader, parent)) {
            if (entry.name != "code" || !entry.isDirectory) continue;
            std::string code = prefix + "code";
            auto code_node = reader.LookUp(code, false, true);
            for (auto file : entries(reader, code_node)) {
                if (file.name != "U-King.rpx" || !file.isFile) continue;
                require(file.size > 0 && file.size <= max_rpx, "RPX entry exceeds 64 MiB or is empty");
                require(result.size() < 64, "WUA exceeds 64 RPX candidates");
                std::string path = code + "/U-King.rpx";
                result.push_back({path, file.size, reader.LookUp(path, true, false)});
            }
        }
    };
    auto root = entries(reader, 0);
    add_code("");
    for (auto entry : root) if (entry.isDirectory && std::regex_match(entry.name.begin(), entry.name.end(), title))
        add_code(std::string(entry.name) + "/");
    return result;
}
}
int main(int argc, char** argv) {
    try {
        require((argc == 3 && std::string_view(argv[1]) == "list") ||
                (argc == 4 && std::string_view(argv[1]) == "read"), "usage: wua-reader list ARCHIVE | read ARCHIVE ENTRY");
        validate(argv[2]);
        std::unique_ptr<ZArchiveReader> reader(ZArchiveReader::OpenFromFile(argv[2]));
        require(bool(reader), "invalid WUA archive");
        auto files = candidates(*reader);
        if (argc == 3) {
            std::cout << "[";
            for (size_t i = 0; i < files.size(); ++i) {
                if (i) std::cout << ",";
                std::cout << "{\"path\":\"" << files[i].path << "\",\"size\":" << files[i].size << "}";
            }
            std::cout << "]\n";
        } else {
            auto selected = std::find_if(files.begin(), files.end(), [&](auto& file) { return file.path == argv[3]; });
            require(selected != files.end(), "entry must exactly match a listed code/U-King.rpx candidate");
            std::array<char, 65536> buffer;
            for (uint64_t offset = 0; offset < selected->size;) {
                auto count = std::min<uint64_t>(buffer.size(), selected->size - offset);
                require(reader->ReadFromFile(selected->node, offset, count, buffer.data()) == count, "truncated or corrupt WUA RPX data");
                std::cout.write(buffer.data(), count);
                require(bool(std::cout), "cannot write RPX output");
                offset += count;
            }
        }
        return 0;
    } catch (const std::exception& error) {
        std::cerr << "WUA reader: " << error.what() << '\n';
        return 1;
    }
}
