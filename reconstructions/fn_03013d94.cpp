typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_02e7ace8(void*);

extern "C" s32 data_10251a8c;

namespace {
struct Object {
    unsigned char padding_0[0x10];
    s32 *vtable;
};
}

extern "C" void *fn_03013d94(void *object) {
    void *result;

    result = object;
    if ((result != 0) || (result = fn_0308e578(0x330U), ((result == 0) == 0))) {
        fn_02e7ace8(result);
        ((Object *)result)->vtable = &data_10251a8c;
    }
    return result;
}
