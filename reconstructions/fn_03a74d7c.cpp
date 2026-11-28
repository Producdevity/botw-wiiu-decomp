typedef int s32;

extern "C" int fn_03a74d04(void*);
extern "C" void fn_03a74d6c(int, int);

extern "C" s32 fn_03a74d7c(void) {
    s32 handle = 0;
    s32 result = fn_03a74d04(&handle);
    if (handle != 0) {
        fn_03a74d6c(handle, result);
    }
    return result;
}
