extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_03aed030(void* object, int value);
extern "C" void fn_03aed03c(void*);
extern "C" void fn_03bf6638(void*);

namespace {
struct Instance {
    char padding_0[2];
    short flags;
    char padding_4[0x40];
    char member[1];
};
}

extern "C" void* fn_03aed070(void* object) {
    Instance *instance;

    instance = (Instance *)object;
    if (instance == 0) {
        instance = (Instance *)fn_0308e578(0x6CU);
    }
    if (instance != 0) {
        instance->flags = 0;
        fn_03bf6638(instance->member);
        fn_03aed030(instance, 16);
        fn_03aed03c(instance);
    }
    return instance;
}
