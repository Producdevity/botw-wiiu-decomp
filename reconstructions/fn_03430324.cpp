extern "C" unsigned char* fn_03430324(unsigned char* base, unsigned index) {
    if (index < 4) {
        return base + index * 8;
    }
    return base;
}
