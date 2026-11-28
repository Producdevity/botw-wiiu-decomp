typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void* fn_03928090(void*);

extern "C" s32 data_10339848;

namespace {
struct Instance {
    char padding_0[0x20];
    s32 *vtable;
};
}

extern "C" void *fn_03927098(void *object) {
    void *result;

    result = object;
    if (result == 0) {
        result = fn_0308e578(0x2CU);
    }
    if (result != 0) {
        fn_03928090(result);
        ((Instance *)result)->vtable = &data_10339848;
    }
    return result;
}
