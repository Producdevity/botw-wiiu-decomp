typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void *, unsigned);
extern "C" void fn_036276c8(void*, void*);

extern "C" void fn_0393f020(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_030bb614((char *)arg0 + 0x70, 2U);
        fn_036276c8(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
