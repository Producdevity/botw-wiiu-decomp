typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03a3c554(void*);

extern "C" s32 data_102f2a1c;

namespace {
struct Object {
    unsigned char padding_0[0x10];
    s32 *vtable;
};
}

extern "C" void *fn_035ebbcc(void *object) {
    void *result;

    result = object;
    if ((result != 0) || (result = fn_0308e578(0x14U), ((result == 0) == 0))) {
        fn_03a3c554(result);
        ((Object *)result)->vtable = &data_102f2a1c;
    }
    return result;
}
