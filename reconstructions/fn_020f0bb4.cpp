extern "C" void fn_020f0bb4(void* p, float* out) {
    const char* q = *(const char* const*)((const char*)p + 0);
    out[0] = *(const float*)(q + 516);
    out[1] = *(const float*)(q + 532);
    out[2] = *(const float*)(q + 548);
}
