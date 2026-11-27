typedef int s32;

extern "C" void fn_02d8173c(void *);
extern "C" void fn_0344a898(void*, void*);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_02d2bf64(void **object) {
    s32 value;
    fn_02d8173c(*object);
    void *target = fn_037966a8(*object);
    if (target != 0) {
        value = 1;
        fn_0344a898(target, &value);
    }
}
