typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void *, unsigned);
struct ProcLink;
extern "C" void fn_0378c734(ProcLink *);

extern "C" void fn_021add2c(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_0378c734((ProcLink *)((char *)arg0 + 0x18));
        fn_030eb73c((char *)arg0 + 4, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
