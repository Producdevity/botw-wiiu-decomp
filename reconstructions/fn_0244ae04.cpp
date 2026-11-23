typedef float f32;

extern "C" void fn_030ea2cc(void *);
extern "C" void fn_0379241c(void*, float);

extern "C" f32 data_100b8148;
extern "C" f32 data_100b8158;

extern "C" void fn_0244ae04(void *arg0) {
    fn_0379241c((char *)arg0 + 0x14, data_100b8158);
    if (!((*(f32 *)((char *)(arg0) + (0x14))) > data_100b8148)) {
        fn_030ea2cc(arg0);
    }
}
