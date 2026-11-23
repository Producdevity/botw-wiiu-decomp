extern "C" float* fn_0294ecd8(int handle);

extern "C" void fn_024c3148(int* handle, float* out) {
    float* source = fn_0294ecd8(*handle);
    out[0] = source[0];
    out[1] = source[1];
    out[2] = source[2];
}
