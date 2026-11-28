typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_02e91174(void*);

extern "C" s32 data_1021b198;

namespace {
struct Object {
    unsigned char padding_0[0x3C];
    s32 *vtable;
};
}

extern "C" void *fn_02e9bf78(void *object) {
    void *result;

    result = object;
    if ((result != 0) || (result = fn_0308e578(0x40U), ((result == 0) == 0))) {
        fn_02e91174(result);
        ((Object *)result)->vtable = &data_1021b198;
    }
    return result;
}
