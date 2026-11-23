typedef unsigned int u32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03c49a34(void *, unsigned);

extern "C" void fn_03c480fc(void *arg0, u32 arg1) {
    if (arg0 != 0) {
        fn_03c49a34(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
