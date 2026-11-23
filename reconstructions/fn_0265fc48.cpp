typedef int s32;
typedef float f32;

extern "C" void fn_02b3277c(void*, float);

extern "C" f32 data_10103034;

extern "C" void fn_0265fc48(void **arg0) {
    void *temp_r12;

    fn_02b3277c(*arg0, data_10103034);
    temp_r12 = *arg0;
    (*(s32 *)((char *)(temp_r12) + (0x364))) = (s32) ((*(s32 *)((char *)(temp_r12) + (0x364))) & 0x7FFFFFFF);
}
