typedef int s32;

extern "C" void fn_03a73080(void*, void*, void*, void*);

extern "C" s32 fn_03a65b4c(s32 arg0, s32 arg1, void *arg2, void *arg3) {
    if (arg1 == 0) {
        fn_03a73080((void *)(arg0 + 0xC8), arg2, arg3, arg3);
        return 1;
    }
    return 0;
}
