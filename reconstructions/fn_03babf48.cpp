typedef int s32;
typedef float f32;

extern "C" void fn_03babee0(void*);
extern "C" void fn_03babf3c(void *, const void *);
extern "C" void fn_03be5560(void*);
extern "C" const float data_103c8978;

extern "C" void fn_03babf48(void *arg0) {
    struct { s32 f8; } sp;

    (*(f32 *)((char *)(arg0) + (0xB8))) = (f32) data_103c8978;
    fn_03be5560((*(void **)((char *)(arg0) + (0xD8))));
    fn_03babee0(arg0);
    sp.f8 = 7;
    fn_03babf3c(arg0, &sp.f8);
}
