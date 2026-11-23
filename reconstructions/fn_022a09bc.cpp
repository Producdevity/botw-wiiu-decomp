typedef unsigned int u32;

extern "C" void fn_02361c10(void*, void*);
extern "C" void fn_02b61568(void *, unsigned);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_022a09bc(void *arg0, u32 arg1) {
    if (arg0 != 0) {
        fn_02b61568((char *)arg0 + 0xB0, 2U);
        fn_02361c10(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
