typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" int fn_037e5ec0(void*);

extern "C" s32 data_1031e554;

namespace {
struct Object {
    unsigned char padding_0[0x2C];
    s32 *vtable;
};
}

extern "C" void *fn_037dda70(void *object) {
    void *result;

    result = object;
    if ((result != 0) || (result = fn_0308e578(0x30U), ((result == 0) == 0))) {
        fn_037e5ec0(result);
        ((Object *)result)->vtable = &data_1031e554;
    }
    return result;
}
