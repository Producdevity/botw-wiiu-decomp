extern "C" unsigned char* fn_030ff490(unsigned char* base, unsigned index) {
    if (index < 64) {
        return base + index * 32;
    }
    return base;
}
