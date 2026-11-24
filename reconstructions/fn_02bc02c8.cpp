typedef int s32;
typedef float f32;

extern "C" void* fn_02c0378c(void* holder);
extern "C" void fn_02c0f3e0(void*, float);

extern "C" void fn_02bc02c8(void *arg0, void *arg1) {
    void *temp_r3;

    temp_r3 = fn_02c0378c((char *)arg0 + 0x10);
    if (temp_r3 != 0) {
        fn_02c0f3e0((void *)((char *)temp_r3 + 0x550), *(*(f32 **)((char *)(arg0) + (0x18))));
    }
}
