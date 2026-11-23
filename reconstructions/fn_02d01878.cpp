typedef int s32;

extern "C" void fn_02b74ac8(void *);
extern "C" void fn_0344a898(void*, void*);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_02d01878(void **arg0) {
    struct { s32 f8; } sp;
    void *temp_r3;

    fn_02b74ac8(*arg0);
    temp_r3 = fn_037966a8(*arg0);
    if (temp_r3 != 0) {
        sp.f8 = 1;
        fn_0344a898(temp_r3, &sp.f8);
    }
}
