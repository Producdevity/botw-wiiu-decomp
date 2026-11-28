typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" int fn_037e5ec0(void*);

extern "C" s32 data_1033b104;

namespace {
struct Instance {
    s32 *vtable;
    char padding_4[0x10];
    char member[1];
};
}

extern "C" s32 **fn_03932d08(s32 **object) {
    s32 **result;

    result = object;
    if (result == 0) {
        result = (s32 **)fn_0308e578(0x44U);
    }
    if (result != 0) {
        *result = &data_1033b104;
        fn_037e5ec0(((Instance *)result)->member);
    }
    return result;
}
