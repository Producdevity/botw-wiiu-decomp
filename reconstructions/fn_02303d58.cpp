typedef float f32;

extern "C" void fn_0230274c(void*);
extern "C" void fn_02b7f998(float *, void *);
extern "C" float fn_03c6fcf0(const float *);

extern "C" void fn_02303d58(void *arg0) {
    fn_0230274c(arg0);
    fn_02b7f998((float *)((char *)arg0 + 0x128), (*(void **)((char *)(arg0) + (0))));
    (*(f32 *)((char *)(arg0) + (0x14C))) = fn_03c6fcf0((const float *)((char *)(*(void **)((char *)(arg0) + (0))) + 0x268));
}
