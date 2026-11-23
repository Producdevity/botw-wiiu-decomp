typedef float f32;

extern "C" void fn_0344ae90(void*, void*);
extern "C" void* fn_037966a8(void *);
extern "C" const unsigned char data_10549dd0[];

extern "C" f32 data_101e5360;

extern "C" void fn_02d69d08(void *arg0) {
    void *temp_r3;

    (*(f32 *)((char *)(arg0) + (0x1AE4))) = (f32) data_101e5360;
    (*(f32 *)((char *)(arg0) + (0x1AE8))) = (f32) data_101e5360;
    temp_r3 = fn_037966a8(arg0);
    if (temp_r3 != 0) {
        fn_0344ae90(temp_r3, (void *)(data_10549dd0));
    }
}
