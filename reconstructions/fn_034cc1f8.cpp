extern "C" void* fn_0308e578(unsigned size);
extern "C" const unsigned char data_102ccdf8[];

namespace {
struct Parameter {
    unsigned value;
};
typedef char ParameterSize[sizeof(Parameter) == 4 ? 1 : -1];

struct Storage {
    unsigned char base[0x90];
    const void* vtable;
    unsigned word_94;
};
typedef char StorageSize[sizeof(Storage) == 152 ? 1 : -1];
}

extern "C" Storage* fn_034ca6f4(Storage* storage, void* owner, Parameter parameter);

extern "C" Storage* fn_034cc1f8(Storage* storage, void* owner, Parameter parameter) {
    if (!storage)
        storage = static_cast<Storage*>(fn_0308e578(sizeof(Storage)));
    if (storage) {
        fn_034ca6f4(storage, owner, parameter);
        storage->vtable = data_102ccdf8;
        storage->word_94 = 0;
    }
    return storage;
}
