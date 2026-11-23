typedef float f32;

extern "C" void fn_02b744a0(void *, float);
extern "C" void fn_03793fcc(void*);
extern "C" void fn_037940ec(void*, float);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_0216701c(void *arg0) {
    void *temp_r3;

    fn_037940ec((char *)arg0 + 0x88, *(*(f32 **)((char *)(arg0) + (0x18))));
    fn_03793fcc((char *)arg0 + 0x88);
    temp_r3 = fn_037966a8((*(void **)((char *)(arg0) + (0))));
    if (temp_r3 != 0) {
        fn_02b744a0(temp_r3, *(*(f32 **)((char *)(arg0) + (0x18))));
    }
}
