typedef float f32;

extern "C" void fn_024384e0(void*);
extern "C" void fn_02950aa0(void*, int, float);
extern "C" void fn_02950ad8(void*, int, float);

extern "C" void fn_023bebf8(void *arg0) {
    fn_024384e0(arg0);
    fn_02950aa0((*(void **)((char *)(arg0) + (0))), 1, *(*(f32 **)((char *)(arg0) + (0x60))));
    fn_02950ad8((*(void **)((char *)(arg0) + (0))), 1, *(*(f32 **)((char *)(arg0) + (0x64))));
}
