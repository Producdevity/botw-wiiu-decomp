typedef int s32;
typedef float f32;

extern "C" int fn_02c0378c(void*, void*);
extern "C" void fn_02c0f270(void*, float);

extern "C" void fn_02bc090c(void *arg0, void *arg1) {
    s32 temp_r3;

    temp_r3 = fn_02c0378c((char *)arg0 + 0x10, arg1);
    if (temp_r3 != 0) {
        fn_02c0f270((void *)(temp_r3 + 0x550), *(*(f32 **)((char *)(arg0) + (0x18))));
    }
}
