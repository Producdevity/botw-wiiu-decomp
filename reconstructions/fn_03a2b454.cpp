typedef int s32;

namespace {
struct ObjectView {
    unsigned char padding_0[0x10];
    s32 *vtable;
};
}

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03a26258(void*);
extern "C" void fn_03a2706c(void*, void*, void*, void*);

extern "C" s32 data_1035bc7c;

extern "C" void *fn_03a2b454(void *object, void *a, void *b, void *c) {
    void *result = object;
    if ((result != 0) || (result = fn_0308e578(0x3CU), ((result == 0) == 0))) {
        fn_03a26258(result);
        ((ObjectView *)result)->vtable = &data_1035bc7c;
        fn_03a2706c(result, a, b, c);
    }
    return result;
}
