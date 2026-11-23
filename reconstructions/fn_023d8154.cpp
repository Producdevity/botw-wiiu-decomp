typedef int s32;

extern "C" void fn_023d6b38(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
struct ProcLink;
extern "C" void fn_0378c734(ProcLink *);

extern "C" void fn_023d8154(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_0378c734((ProcLink *)((char *)arg0 + 0x90));
        fn_023d6b38(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
