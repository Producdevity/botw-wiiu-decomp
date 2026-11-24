extern "C" void* fn_0308e578(unsigned size);
extern "C" const unsigned char data_1036cb28[];

struct Opaque_03ad4ed0 {
    unsigned word_0;
    unsigned word_4;
    unsigned word_8;
    unsigned word_c;
    unsigned word_10;
    unsigned word_14;
    const void* vtable;
};

namespace {
typedef Opaque_03ad4ed0 Storage;
typedef char StorageSize[sizeof(Storage) == 28 ? 1 : -1];
}

extern "C" Opaque_03ad4ed0* fn_03ad4ed0(Opaque_03ad4ed0* storage) {
    if (!storage)
        storage = static_cast<Storage*>(fn_0308e578(sizeof(Storage)));
    if (storage) {
        storage->vtable = data_1036cb28;
        storage->word_0 = 0;
        storage->word_4 = 0;
        storage->word_8 = 0;
        storage->word_c = 0;
        storage->word_10 = 0;
        storage->word_14 = 0;
    }
    return storage;
}
