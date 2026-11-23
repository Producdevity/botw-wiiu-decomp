extern "C" void fn_02922ccc(void* p, float* out) {
    const char* q = *(const char* const*)((const char*)p + 0);
    out[0] = *(const float*)(q + 512);
    out[1] = *(const float*)(q + 528);
    out[2] = *(const float*)(q + 544);
}
