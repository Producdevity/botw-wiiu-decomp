typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_0369fff8(void*);

extern "C" s32 data_103047a8;

namespace {
struct Object {
    unsigned char padding_0[0x10];
    s32 *vtable;
};
}

extern "C" void *fn_0369fe9c(void *object) {
    void *result;

    result = object;
    if ((result != 0) || (result = fn_0308e578(0x14U), ((result == 0) == 0))) {
        fn_0369fff8(result);
        ((Object *)result)->vtable = &data_103047a8;
    }
    return result;
}
