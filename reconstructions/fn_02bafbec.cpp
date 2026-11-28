extern "C" void fn_02bafbec(void* self, unsigned int* value, unsigned char* out) {
    unsigned int v = *value;
    unsigned char result = v;
    if (v >= 3) {
        result = 1;
    }
    *out = result;
}
