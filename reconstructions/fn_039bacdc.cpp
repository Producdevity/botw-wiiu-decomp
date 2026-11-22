extern "C" unsigned char* fn_039bacdc(unsigned char* base, unsigned index) {
    if (index < 42) {
        return base + index * 16;
    }
    return base;
}
