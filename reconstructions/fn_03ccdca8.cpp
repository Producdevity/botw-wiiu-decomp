typedef int s32;

extern "C" void fn_03cca1b0(void*, void*);
extern "C" int fn_03cca248(void *);

extern "C" void *fn_03ccdca8(void *arg0) {
    s32 padding;

    padding = fn_03cca248(arg0) & 7;
    if (padding != 0) {
        padding = 8 - padding;
        fn_03cca1b0(arg0, (void *)padding);
    }
    return (void *)padding;
}
