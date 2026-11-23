typedef float f32;

extern "C" void fn_02216fbc(void *);
extern "C" void fn_034aa718(void*, float);

extern "C" void fn_021f9b18(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x68)));
    if (temp_r3 != 0) {
        fn_034aa718(temp_r3, (*(f32 *)((char *)(arg0) + (0x70))));
    }
    fn_02216fbc(arg0);
}
