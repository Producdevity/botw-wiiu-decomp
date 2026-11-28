extern "C" void fn_0245af14(void*, float, float);
extern "C" void fn_030b3e24(void*, void*);

extern "C" float data_100ba958;

extern "C" void fn_0245b0c0(void *object, void *other) {
    struct { float value; } local;

    local.value = data_100ba958;
    fn_030b3e24(&local.value, other);
    fn_0245af14(object, local.value, ((float *) other)[2]);
}
