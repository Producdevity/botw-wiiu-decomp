typedef float f32;

extern "C" void fn_022c4ba0(void*);
extern "C" void fn_02b744a0(void *, float);
extern "C" void* fn_037966a8(void *);

extern "C" f32 data_10067634;

extern "C" void fn_0226b360(void **object) {
    void *target = fn_037966a8(*object);
    if (target != 0) {
        fn_02b744a0(target, data_10067634);
        fn_022c4ba0(object);
    }
}
