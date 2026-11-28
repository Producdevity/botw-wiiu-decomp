typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_030b70fc(void*);

extern "C" s32 data_10333284;

extern "C" s32 **fn_038d97c8(s32 **object) {
    s32 **result;

    result = object;
    if ((result != 0) || (result = (s32 **)(fn_0308e578(0x14U)), ((result == 0) == 0))) {
        fn_030b70fc(result);
        *result = &data_10333284;
    }
    return result;
}
