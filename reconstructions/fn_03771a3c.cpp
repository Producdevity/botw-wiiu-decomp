typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03acfe58(void*);

extern "C" s32 data_1030ef08;

namespace {
struct Object {
    unsigned char padding_0[0x8];
    s32 *vtable;
};
}

extern "C" void *fn_03771a3c(void *object) {
    void *result;

    result = object;
    if ((result != 0) || (result = fn_0308e578(0x10U), ((result == 0) == 0))) {
        fn_03acfe58(result);
        ((Object *)result)->vtable = &data_1030ef08;
    }
    return result;
}
