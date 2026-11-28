typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_039461dc(void*, void*, void*, void*);

extern "C" s32 data_10328cd4;

extern "C" s32 **fn_03866908(s32 **object, void *first, void *second, void *third) {
    s32 **result;

    result = object;
    if ((result != 0) || (result = (s32 **)(fn_0308e578(0xcU)), ((result == 0) == 0))) {
        fn_039461dc(result, first, second, third);
        *result = &data_10328cd4;
    }
    return result;
}
