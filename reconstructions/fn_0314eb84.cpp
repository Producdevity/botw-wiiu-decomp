typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_0314d7b4(void*);

extern "C" s32 data_10286ac8;

namespace {
struct Object {
    unsigned char padding_0[0x1C];
    s32 *vtable;
};
}

extern "C" void *fn_0314eb84(void *object) {
    void *result;

    result = object;
    if ((result != 0) || (result = fn_0308e578(0x20U), ((result == 0) == 0))) {
        fn_0314d7b4(result);
        ((Object *)result)->vtable = &data_10286ac8;
    }
    return result;
}
