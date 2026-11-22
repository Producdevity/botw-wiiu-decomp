extern "C" unsigned char* fn_03430104(unsigned char* base, unsigned index) {
    if (index < 4) {
        return base + index * 4;
    }
    return base;
}
