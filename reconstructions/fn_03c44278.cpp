typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03c41b9c(void*);

extern "C" s32 data_103ddce0;

namespace {
struct Instance {
    char padding_0[0x21C];
    s32 *vtable;
};
}

extern "C" void *fn_03c44278(void *object) {
    void *result;

    result = object;
    if (result == 0) {
        result = fn_0308e578(0x224U);
    }
    if (result != 0) {
        fn_03c41b9c(result);
        ((Instance *)result)->vtable = &data_103ddce0;
    }
    return result;
}
