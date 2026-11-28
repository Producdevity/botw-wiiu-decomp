typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03969dcc(void*, void*, void*, void*);

extern "C" s32 data_10346024;

extern "C" s32 **fn_0396a8e0(s32 **object, void *param1, void *param2, void *param3) {
    s32 **result;

    result = object;
    if (result == 0) {
        result = (s32 **)fn_0308e578(0xcU);
    }
    if (result != 0) {
        fn_03969dcc(result, param1, param2, param3);
        *result = &data_10346024;
    }
    return result;
}
