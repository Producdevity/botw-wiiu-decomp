extern "C" const float* fn_033a6198(void*);

extern "C" void fn_026ee968(char* self, float* out) {
    const float* value = fn_033a6198(self + 0x30);
    out[0] = value[0];
    out[1] = value[1];
    out[2] = value[2];
}
