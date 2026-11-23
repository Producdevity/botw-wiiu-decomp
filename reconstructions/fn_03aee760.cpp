typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03a4d6dc(void *);

extern "C" void fn_03aee760(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_03a4d6dc(arg0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
