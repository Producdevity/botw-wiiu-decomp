typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_0314e648(void*);

extern "C" s32 data_10286bd0;

namespace {
struct Object {
    unsigned char padding_0[0x1C];
    s32 *vtable;
};
}

extern "C" void *fn_0314e804(void *object) {
    void *result;

    result = object;
    if ((result != 0) || (result = fn_0308e578(0x20U), ((result == 0) == 0))) {
        fn_0314e648(result);
        ((Object *)result)->vtable = &data_10286bd0;
    }
    return result;
}
