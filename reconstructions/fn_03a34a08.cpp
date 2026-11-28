extern "C" unsigned char data_1035cbec[];
extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_03c4952c(void*, int, int);

namespace {
struct Instance {
    char padding_0[8];
    const void *table;
};
}

extern "C" void* fn_03a34a08(void* object, int param1, int param2) {
    Instance *instance;

    instance = (Instance *)object;
    if (instance == 0) {
        instance = (Instance *)fn_0308e578(0xA4U);
    }
    if (instance != 0) {
        fn_03c4952c(instance, param1, param2);
        const void *vtable = data_1035cbec;
        instance->table = vtable;
    }
    return instance;
}
