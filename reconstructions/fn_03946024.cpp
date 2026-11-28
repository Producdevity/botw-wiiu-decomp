typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03719cc4(void*, void*, void*, void*);

extern "C" s32 data_1033f634;

extern "C" s32 **fn_03946024(s32 **object, void *param1, void *param2, void *param3) {
    s32 **result;

    result = object;
    if (result == 0) {
        result = (s32 **)fn_0308e578(0x4U);
    }
    if (result != 0) {
        fn_03719cc4(result, param1, param2, param3);
        *result = &data_1033f634;
    }
    return result;
}
