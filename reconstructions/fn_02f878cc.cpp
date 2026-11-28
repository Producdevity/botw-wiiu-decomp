typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03a28fc4(void*, void*, void*, void*);

extern "C" s32 data_102351f8;

extern "C" s32 **fn_02f878cc(s32 **object, void *first, void *second, void *third) {
    s32 **result;

    result = object;
    if ((result != 0) || (result = (s32 **)(fn_0308e578(0x10U)), ((result == 0) == 0))) {
        fn_03a28fc4(result, first, second, third);
        *result = &data_102351f8;
    }
    return result;
}
