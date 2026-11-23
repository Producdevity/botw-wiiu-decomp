typedef int s32;

extern "C" void fn_02938210(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037d6a30(void*, int);

extern "C" void fn_0293ad0c(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_037d6a30((char *)arg0 + 0xB0, 2);
        fn_02938210(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
