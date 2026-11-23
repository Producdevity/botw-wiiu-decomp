typedef float f32;

extern "C" float fn_0344e848(void *);
extern "C" void* fn_037966a8(void *);

extern "C" f32 data_100203a4;

extern "C" f32 fn_020fbb40(void **arg0) {
    void *temp_r3;

    temp_r3 = fn_037966a8(*arg0);
    if (temp_r3 != 0) {
        return fn_0344e848(temp_r3);
    }
    return data_100203a4;
}
