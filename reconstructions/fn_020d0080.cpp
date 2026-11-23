typedef float f32;

extern "C" void fn_020cf5f4(void*);
extern "C" void fn_02b7f998(float *, void *);

extern "C" void fn_020d0080(void *arg0) {
    fn_020cf5f4(arg0);
    fn_02b7f998((float *)((char *)arg0 + 0x40), (*(void **)((char *)(arg0) + (0))));
    (*(f32 *)((char *)(arg0) + (0x64))) = (f32) (*(f32 *)((char *)((*(void **)((char *)(arg0) + (0)))) + (0x26C)));
}
