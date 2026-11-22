extern "C" unsigned char* fn_020659a8(unsigned char* base, unsigned index) {
    if (index < 8) {
        return base + index * 4;
    }
    return base;
}
