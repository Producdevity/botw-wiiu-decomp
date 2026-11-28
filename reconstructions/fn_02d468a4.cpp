typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_02d4618c(void*);

extern "C" s32 data_101e4370;

extern "C" s32 **fn_02d468a4(s32 **object) {
    s32 **result;

    result = object;
    if ((result != 0) || (result = (s32 **)(fn_0308e578(4U)), ((result == 0) == 0))) {
        fn_02d4618c(result);
        *result = &data_101e4370;
    }
    return result;
}
