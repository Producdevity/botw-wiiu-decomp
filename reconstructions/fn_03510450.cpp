typedef float f32;

extern "C" void fn_03510d48(void*, int, float);
extern "C" void* fn_03510f04(void *, void *);
struct LinearRamp;
extern "C" void fn_03bb5814(LinearRamp *);

extern "C" void fn_03510450(void *arg0) {
    void *temp_r3;

    fn_03bb5814((LinearRamp *)((char *)arg0 + 0x140));
    temp_r3 = (*(void **)((char *)(arg0) + (0x154)));
    if ((temp_r3 != 0) && (fn_03510f04(temp_r3, (char *)arg0 + 0xC) != 0)) {
        fn_03510d48((*(void **)((char *)(arg0) + (0x154))), 1, (*(f32 *)((char *)(arg0) + (0x140))));
    }
}
