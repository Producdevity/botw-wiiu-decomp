typedef int s32;
typedef float f32;

extern "C" void fn_03b9fe0c(void*, int, float);

extern "C" s32 fn_0359c048(void *arg0, s32 arg1, f32 farg0) {
    void *temp_r12;
    void *temp_r3;

    temp_r12 = (*(void **)((char *)(arg0) + (0x398)));
    if (temp_r12 != 0) {
        temp_r3 = (*(void **)((char *)(temp_r12) + (0x44)));
        if (temp_r3 != 0) {
            fn_03b9fe0c(temp_r3, arg1, farg0);
            return 1;
        }
    }
    return 0;
}
