typedef float f32;

extern "C" void fn_0294e104(void*, int, int, float);
extern "C" float fn_0344a2c0(void *);
extern "C" void* fn_037966a8(void *);

extern "C" f32 data_100c60ac;

extern "C" void fn_024bae10(void *arg0) {
    void *owner;

    owner = fn_037966a8(arg0);
    if (owner != 0) {
        fn_0294e104(arg0, 1, 0, 2.0f * (fn_0344a2c0(owner) / data_100c60ac));
    }
}
