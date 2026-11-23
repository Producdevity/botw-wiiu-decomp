typedef int s32;
typedef float f32;

extern "C" void fn_02cb89ec(void*);
extern "C" void fn_02d4b63c(void*, float);
extern "C" void fn_0335d74c(void);

extern "C" f32 data_101d2048;

extern "C" void fn_02ca2c74(void **arg0) {
    void* const* vt1;
    void *temp_r3;

    fn_02cb89ec(arg0);
    fn_02d4b63c(*arg0, data_101d2048);
    temp_r3 = *arg0;
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(temp_r3) + (0xE8)))[527])(temp_r3);
    fn_0335d74c();
}
