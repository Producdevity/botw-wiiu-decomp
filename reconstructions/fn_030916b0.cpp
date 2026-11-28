typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_030913ec(void*, void*, int);

extern "C" s32 data_1025e814;

namespace {
struct Object {
    unsigned char padding_0[0x18];
    s32 *vtable;
    unsigned char storage[0x60];
};
}

extern "C" void *fn_030916b0(void *object) {
    void *result;

    result = object;
    if ((result != 0) || (result = fn_0308e578(0x7CU), ((result == 0) == 0))) {
        fn_030913ec(result, ((Object *)result)->storage, 0x60);
        ((Object *)result)->vtable = &data_1025e814;
    }
    return result;
}
