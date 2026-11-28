typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03acfe58(void*);

extern "C" s32 data_10361278;

namespace {
struct Instance {
    char padding_0[8];
    s32 *vtable;
};
}

extern "C" void *fn_03a72958(void *object) {
    void *result;

    result = object;
    if (result == 0) {
        result = fn_0308e578(0x10U);
    }
    if (result != 0) {
        fn_03acfe58(result);
        ((Instance *)result)->vtable = &data_10361278;
    }
    return result;
}
