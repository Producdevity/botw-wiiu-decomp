typedef int s32;

extern "C" void fn_03a73080(void*, void*, void*, void*);

extern "C" s32 fn_03a65b4c(s32 object, s32 flag, void *first, void *second) {
    if (flag == 0) {
        fn_03a73080((void *)(object + 0xC8), first, second, second);
        return 1;
    }
    return 0;
}
