typedef float f32;

extern "C" void fn_022c4ba0(void*);
extern "C" void fn_02b744a0(void *, float);
extern "C" void* fn_037966a8(void *);

extern "C" f32 data_10067634;

extern "C" void fn_0226b360(void **arg0) {
    void *temp_r3;

    temp_r3 = fn_037966a8(*arg0);
    if (temp_r3 != 0) {
        fn_02b744a0(temp_r3, data_10067634);
        fn_022c4ba0(arg0);
    }
}
