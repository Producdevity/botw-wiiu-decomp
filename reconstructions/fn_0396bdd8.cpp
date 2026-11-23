extern "C" void* fn_0308e578(unsigned size);
extern "C" bool fn_0396d5ac(const void* data);

namespace {
struct ByamlHeader { unsigned char pad0[12]; unsigned int dataOffset; };
struct ByamlView { const ByamlHeader* header; const unsigned char* data; };
typedef char ByamlViewSize[sizeof(ByamlView) == 8 ? 1 : -1];
}

extern "C" void* fn_0396bdd8(void* storage, const void* header) {
    if (!storage) {
        storage = fn_0308e578(sizeof(ByamlView));
        if (!storage) return storage;
    }
    static_cast<ByamlView*>(storage)->header = static_cast<const ByamlHeader*>(header);
    static_cast<ByamlView*>(storage)->data = 0;
    if (header) {
        if (!fn_0396d5ac(header)) {
            static_cast<ByamlView*>(storage)->header = 0;
            static_cast<ByamlView*>(storage)->data = 0;
        } else {
            const ByamlHeader*& validated = static_cast<ByamlView*>(storage)->header;
            if (validated->dataOffset)
                static_cast<ByamlView*>(storage)->data = reinterpret_cast<const unsigned char*>(validated) + validated->dataOffset;
        }
    }
    return storage;
}
