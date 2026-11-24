extern "C" void* fn_0308e578(unsigned size);
extern "C" const unsigned char data_1031ef48[];
extern "C" const unsigned char data_10263910[];
extern "C" const unsigned char data_10263a00[];

struct Opaque_037e5bfc {
    struct Handle {
        const void* target;
        const void* vtable;
    };

    unsigned char base[0x10];
    const void* vtable;
    bool flag_14;
    bool flag_15;
    bool flag_16;
    bool flag_17;
    bool flag_18;
    bool flag_19;
    bool flag_1a;
    bool flag_1b;
    bool flag_1c;
    unsigned word_20;
    unsigned word_24;
    unsigned word_28;
    unsigned word_2c;
    unsigned word_30;
    unsigned word_34;
    unsigned word_38;
    unsigned word_3c;
    unsigned word_40;
    unsigned word_44;
    Handle handle;
};
typedef char HandleSize[sizeof(Opaque_037e5bfc::Handle) == 8 ? 1 : -1];
typedef char StorageSize[sizeof(Opaque_037e5bfc) == 80 ? 1 : -1];

namespace {
typedef Opaque_037e5bfc Storage;
typedef Opaque_037e5bfc::Handle Handle;

inline Handle* construct_handle(Handle* handle) {
    if (!handle)
        handle = static_cast<Handle*>(fn_0308e578(sizeof(Handle)));
    if (handle) {
        handle->vtable = data_10263910;
        handle->target = data_10263a00;
    }
    return handle;
}
}

extern "C" Storage* fn_037e5b5c(Storage* storage);

extern "C" Storage* fn_037e5bfc(Storage* storage) {
    if (!storage)
        storage = static_cast<Storage*>(fn_0308e578(sizeof(Storage)));
    if (storage) {
        fn_037e5b5c(storage);
        storage->vtable = data_1031ef48;
        storage->flag_14 = false;
        storage->flag_15 = false;
        storage->flag_16 = false;
        storage->flag_17 = true;
        storage->flag_18 = false;
        storage->flag_19 = true;
        storage->flag_1a = true;
        storage->flag_1b = true;
        storage->flag_1c = true;
        storage->word_20 = 0;
        storage->word_24 = 0;
        storage->word_28 = 0;
        storage->word_2c = 0;
        storage->word_30 = 0;
        storage->word_34 = 0;
        storage->word_38 = 0;
        storage->word_3c = 0;
        storage->word_40 = 0;
        storage->word_44 = 0;
        construct_handle(&storage->handle);
    }
    return storage;
}
