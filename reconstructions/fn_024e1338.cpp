extern "C" float* fn_0294ed78(int handle);

extern "C" void fn_024e1338(int* handle, float* out) {
    float* source = fn_0294ed78(*handle);
    out[0] = source[2];
    out[1] = source[6];
    out[2] = source[10];
}
