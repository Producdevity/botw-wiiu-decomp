extern "C" unsigned char* fn_030feedc(unsigned char* base, unsigned index) {
    if (index < 26) {
        return base + index * 4;
    }
    return base;
}
