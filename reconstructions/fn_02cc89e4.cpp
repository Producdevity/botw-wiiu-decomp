extern "C" unsigned char* fn_02cc89e4(unsigned char* base, unsigned index) {
    if (index < 5) {
        return base + index * 4;
    }
    return base;
}
