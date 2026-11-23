typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03c124a4(void*, void*);

extern "C" void fn_03c16db0(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_03c124a4(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
