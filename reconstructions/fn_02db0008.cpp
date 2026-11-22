extern "C" unsigned char* fn_02db0008(unsigned char* base, unsigned index) {
    if (index < 17) {
        return base + index * 4;
    }
    return base;
}
