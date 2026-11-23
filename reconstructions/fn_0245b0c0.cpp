typedef float f32;

extern "C" void fn_0245af14(void*, float, float);
extern "C" void fn_030b3e24(void*, void*);

extern "C" f32 data_100ba958;

extern "C" void fn_0245b0c0(void *arg0, void *arg1) {
    struct { f32 f8; } sp;

    sp.f8 = data_100ba958;
    fn_030b3e24(&sp.f8, arg1);
    fn_0245af14(arg0, sp.f8, (*(f32 *)((char *)(arg1) + (8))));
}
