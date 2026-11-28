typedef int s32;

extern "C" void fn_0308e6d0(void *);
struct ProcLink;
extern "C" void fn_0378c734(ProcLink *);

extern "C" void fn_0249c698(struct ProcLink *object, s32 flags) {
    if (object != 0) {
        fn_0378c734(object);
        fn_0378c734(object);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
