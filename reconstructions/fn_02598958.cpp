typedef float f32;

extern "C" void fn_0317be7c(void*);
extern "C" void fn_0317f94c(void*, float);

extern "C" f32 data_100e87b0;

extern "C" void fn_02598958(void **arg0) {
    void *temp_r31;

    temp_r31 = (*(void **)((char *)(*arg0) + (0x38C)));
    if (temp_r31 != 0) {
        fn_0317f94c(temp_r31, data_100e87b0);
        fn_0317be7c(temp_r31);
    }
}
