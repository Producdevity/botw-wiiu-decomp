typedef float f32;

extern "C" void fn_02b83104(void*, void*, void*, float);

extern "C" f32 data_10176024;

extern "C" void fn_02995644(void **arg0) {
    void* const* vt1;
    void *temp_r3;

    temp_r3 = *arg0;
    fn_02b83104(0, ((void * (*)(void *))(vt1 = *(void* const**)((char *)(temp_r3) + (0xE8)))[91])(temp_r3), (char *)arg0 + 0x104, data_10176024);
}
