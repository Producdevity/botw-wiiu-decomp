typedef float f32;

extern "C" void fn_0330970c(void*, void*, float);
extern "C" void* fn_037966a8(void *);

extern "C" f32 data_1007cf88;

extern "C" void fn_022fad20(void **arg0) {
    void *temp_r31;
    void *temp_r3;
    void *temp_r4;

    temp_r3 = *arg0;
    temp_r31 = (*(void **)((char *)(temp_r3) + (0x394)));
    temp_r4 = fn_037966a8(temp_r3);
    if ((temp_r31 != 0) && (temp_r4 != 0)) {
        fn_0330970c(temp_r31, temp_r4, data_1007cf88);
    }
}
