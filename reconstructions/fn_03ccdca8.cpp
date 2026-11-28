extern "C" void fn_03cca1b0(void*, void*);
extern "C" int fn_03cca248(void *);

extern "C" void *fn_03ccdca8(void *object) {
    int padding;

    padding = fn_03cca248(object) & 7;
    if (padding != 0) {
        padding = 8 - padding;
        fn_03cca1b0(object, (void *)padding);
    }
    return (void *)padding;
}
