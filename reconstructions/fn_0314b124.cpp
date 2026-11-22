extern "C" void* fn_0308e578(unsigned size);
extern "C" unsigned* fn_030eb700(unsigned* context);
extern "C" const unsigned char data_102865b8[];

namespace {
struct Source {
    const void* first;
    unsigned second;
};
typedef char SourceSize[sizeof(Source) == 8 ? 1 : -1];

struct Storage {
    const void* first;
    unsigned slot;
    unsigned second;
    const void* vtable;
};
typedef char StorageSize[sizeof(Storage) == 16 ? 1 : -1];
}

extern "C" Storage* fn_0314b124(Storage* storage, const Source* source) {
    if (!storage)
        storage = static_cast<Storage*>(fn_0308e578(sizeof(Storage)));
    if (storage) {
        storage->vtable = data_102865b8;
        storage->first = source->first;
        fn_030eb700(&storage->slot);
        storage->second = source->second;
    }
    return storage;
}
