typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_035d3ed4(void* object, unsigned flags);
extern "C" void fn_035c8434(void *);

extern "C" void fn_035c84f8(void *object, s32 flags) {
    if (object != 0) {
        fn_035c8434(object);
        fn_035d3ed4((char *)object + 0x1C, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
