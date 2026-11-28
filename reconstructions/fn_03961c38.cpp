typedef int s32;

extern "C" void* fn_0308e578(unsigned size);
extern "C" s32 **fn_03946024(s32 **object, void *param1, void *param2, void *param3);

extern "C" s32 data_1034371c;

extern "C" s32 **fn_03961c38(s32 **object, void *param1, void *param2, void *param3) {
    s32 **result;

    result = object;
    if (result == 0) {
        result = (s32 **)fn_0308e578(0x4U);
    }
    if (result != 0) {
        fn_03946024(result, param1, param2, param3);
        *result = &data_1034371c;
    }
    return result;
}
