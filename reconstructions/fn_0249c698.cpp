typedef int s32;

extern "C" void fn_0308e6d0(void *);
struct ProcLink;
extern "C" void fn_0378c734(ProcLink *);

extern "C" void fn_0249c698(struct ProcLink *arg0, s32 arg1) {
    if (arg0 != 0) {
        fn_0378c734(arg0);
        fn_0378c734(arg0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
