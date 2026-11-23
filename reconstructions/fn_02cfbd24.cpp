typedef float f32;

extern "C" void fn_02d6b514(void *);
extern "C" void fn_030ea2cc(void *);

extern "C" f32 data_101ddc54;

extern "C" void fn_02cfbd24(void **arg0) {
    fn_02d6b514(*arg0);
    if (!((*(f32 *)((char *)(*arg0) + (0x260))) > data_101ddc54)) {
        fn_030ea2cc(arg0);
    }
}
