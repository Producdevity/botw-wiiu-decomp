typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_031268bc(void*, void*);

extern "C" void fn_03126a1c(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        (*(s32 *)((char *)(arg0) + (0xC))) = 0;
        fn_031268bc(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
