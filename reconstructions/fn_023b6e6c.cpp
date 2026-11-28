typedef float f32;

extern "C" float fn_0344e848(void* p);
extern "C" void* fn_037966a8(void* context);

extern "C" f32 data_1009ed54;

extern "C" f32 fn_023b6e6c(void *handle) {
    void *target;

    target = fn_037966a8(*(void **)handle);
    if (target != 0) {
        return fn_0344e848(target);
    }
    return data_1009ed54;
}
