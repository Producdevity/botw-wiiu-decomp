typedef unsigned char u8;
typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_103467b0;

namespace {
struct Instance {
    s32 *vtable;
    const u8 *table;
};
}

extern "C" void fn_0396ded8(void *object) {
    Instance *instance;

    instance = (Instance *)object;
    if (instance == 0) {
        instance = (Instance *)fn_0308e578(8U);
    }
    if (instance != 0) {
        instance->table = &data_10263910;
        instance->vtable = &data_103467b0;
    }
}
