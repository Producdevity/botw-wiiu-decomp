extern "C" void* fn_0308e578(unsigned size);
extern "C" bool fn_0396d5ac(const void* data);

namespace {
struct ByamlHeader { unsigned char pad0[12]; unsigned int dataOffset; };
struct ByamlView { const ByamlHeader* header; const unsigned char* data; };
typedef char ByamlViewSize[sizeof(ByamlView) == 8 ? 1 : -1];
}

extern "C" ByamlView* fn_0396bdd8(ByamlView* storage, const ByamlHeader* header) {
    if (!storage) {
        storage = static_cast<ByamlView*>(fn_0308e578(sizeof(ByamlView)));
        if (!storage) return storage;
    }
    storage->header = header;
    storage->data = 0;
    if (header) {
        if (!fn_0396d5ac(header)) {
            storage->header = 0;
            storage->data = 0;
        } else {
            const ByamlHeader*& validated = storage->header;
            if (validated->dataOffset)
                storage->data = reinterpret_cast<const unsigned char*>(validated) + validated->dataOffset;
        }
    }
    return storage;
}
