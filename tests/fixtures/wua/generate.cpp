#include "zarchive/zarchivewriter.h"
#include <cstdlib>
#include <fstream>
#include <string>

int main(int argc, char** argv) {
    if (argc != 2) return 1;
    std::ofstream output(argv[1], std::ios::binary);
    if (!output) return 1;
    auto start = [](int32_t, void*) {};
    auto write = [](const void* data, size_t length, void* context) {
        static_cast<std::ofstream*>(context)->write(static_cast<const char*>(data), length);
    };
    ZArchiveWriter writer(start, write, &output);
    auto add = [&](const char* directory, const char* filename, const std::string& data) {
        if (!writer.MakeDir(directory, true) || !writer.StartNewFile(filename)) std::exit(2);
        writer.AppendData(data.data(), data.size());
    };
    add("code", "code/U-King.rpx", "synthetic-root-rpx");
    add("00050000101c9400_v0/code", "00050000101c9400_v0/code/U-King.rpx", "synthetic-base-rpx");
    std::string update;
    for (int i = 0; i < 10000; ++i) update += "synthetic-update-";
    add("0005000e101c9400_v208/code", "0005000e101c9400_v208/code/U-King.rpx", update);
    add("0005000c101c9400_v80/content", "0005000c101c9400_v80/content/dlc.bin", "synthetic-dlc");
    add("unrelated/code", "unrelated/code/U-King.rpx", "must-not-be-listed");
    writer.Finalize();
    return output.good() ? 0 : 3;
}
