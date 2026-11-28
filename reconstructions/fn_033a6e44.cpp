typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_033a5e34(void*);

extern "C" s32 data_102ba1a8;

namespace {
struct Object {
    unsigned char padding_0[0x44];
    s32 *vtable;
};
}

extern "C" void *fn_033a6e44(void *object) {
    void *result;

    result = object;
    if ((result != 0) || (result = fn_0308e578(0x48U), ((result == 0) == 0))) {
        fn_033a5e34(result);
        ((Object *)result)->vtable = &data_102ba1a8;
    }
    return result;
}
