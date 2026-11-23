typedef float f32;

extern "C" void fn_0245b118(void*, void*);
extern "C" void fn_02b744a0(void *, float);

extern "C" void fn_0245b62c(void *arg0, void *arg1) {
    fn_0245b118(arg0, arg1);
    fn_02b744a0(arg1, *(*(f32 **)((char *)(arg0) + (0x18))));
}
