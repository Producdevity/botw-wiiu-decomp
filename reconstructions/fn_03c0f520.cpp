typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03c0fa78(void*);

extern "C" s32 data_103d48bc;

namespace {
struct Instance {
    char padding_0[4];
    s32 *vtable;
};
}

extern "C" void *fn_03c0f520(void *object) {
    void *result;

    result = object;
    if (result == 0) {
        result = fn_0308e578(0xC4U);
    }
    if (result != 0) {
        fn_03c0fa78(result);
        ((Instance *)result)->vtable = &data_103d48bc;
    }
    return result;
}
