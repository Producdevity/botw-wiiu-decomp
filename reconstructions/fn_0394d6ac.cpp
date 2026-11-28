typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_0394d0e0(void*);

extern "C" s32 data_10340350;

namespace {
struct Instance {
    char padding_0[0x18];
    s32 *vtable;
};
}

extern "C" void *fn_0394d6ac(void *object) {
    void *result;

    result = object;
    if (result == 0) {
        result = fn_0308e578(0xBCU);
    }
    if (result != 0) {
        fn_0394d0e0(result);
        ((Instance *)result)->vtable = &data_10340350;
    }
    return result;
}
