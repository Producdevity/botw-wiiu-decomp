typedef float f32;

extern "C" void fn_03488b40(void*, void*);
extern "C" void fn_03489708(void*, void*, float);

extern "C" f32 data_102b4f40;
extern "C" f32 data_102b5018;

extern "C" void fn_03364430(void *arg0) {
    struct { f32 f8; char pad0[4]; f32 f10; } sp;

    fn_03488b40(&sp.f8, (*(void **)((char *)(arg0) + (8))));
    sp.f8 = data_102b4f40;
    sp.f10 = data_102b4f40;
    fn_03489708((*(void **)((char *)(arg0) + (8))), &sp.f8, data_102b5018);
}
