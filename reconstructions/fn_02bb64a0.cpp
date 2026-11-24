extern "C" void fn_02bb64a0(void* self, unsigned int* value, unsigned char* out) {
    unsigned int v = *value;
    unsigned char result = v;
    if (v >= 4) {
        result = 1;
    }
    *out = result;
}
