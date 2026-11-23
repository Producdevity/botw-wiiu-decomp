typedef float f32;

extern "C" void fn_030ea2cc(void *);
extern "C" void fn_037924b4(void*, float);

extern "C" f32 data_10078d1c;

extern "C" void fn_022e0a3c(void *arg0, f32 farg0) {
    fn_037924b4((char *)arg0 + 0x14, farg0);
    if (!((*(f32 *)((char *)(arg0) + (0x14))) > data_10078d1c)) {
        fn_030ea2cc(arg0);
    }
}
