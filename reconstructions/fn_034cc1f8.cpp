extern "C" void* fn_0308e578(unsigned size);
extern "C" const unsigned char data_102ccdf8[];

struct Opaque_034cc1f8 {
    struct Parameter {
        unsigned value;
    };

    unsigned char base[0x90];
    const void* vtable;
    unsigned word_94;
};

namespace {
typedef Opaque_034cc1f8 Storage;
typedef Opaque_034cc1f8::Parameter Parameter;
typedef char ParameterSize[sizeof(Parameter) == 4 ? 1 : -1];
typedef char StorageSize[sizeof(Storage) == 152 ? 1 : -1];
}

extern "C" Opaque_034cc1f8* fn_034ca6f4(Opaque_034cc1f8* storage, void* owner, Opaque_034cc1f8::Parameter parameter);

extern "C" Opaque_034cc1f8* fn_034cc1f8(Opaque_034cc1f8* storage, void* owner, Opaque_034cc1f8::Parameter parameter) {
    if (!storage)
        storage = static_cast<Storage*>(fn_0308e578(sizeof(Storage)));
    if (storage) {
        fn_034ca6f4(storage, owner, parameter);
        storage->vtable = data_102ccdf8;
        storage->word_94 = 0;
    }
    return storage;
}
