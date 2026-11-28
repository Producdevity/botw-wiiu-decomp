typedef int s32;

namespace {
struct ObjectView {
    unsigned char padding_0[4];
    s32 *vtable;
};
}

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03bb472c(void*);
extern "C" void fn_03bb47a0(void*);

extern "C" s32 data_102e5ef0;

extern "C" void *fn_0358a434(void *object) {
    void *result = object;
    if ((result != 0) || (result = fn_0308e578(0x40U), ((result == 0) == 0))) {
        fn_03bb472c(result);
        ((ObjectView *)result)->vtable = &data_102e5ef0;
        fn_03bb47a0(result);
    }
    return result;
}
