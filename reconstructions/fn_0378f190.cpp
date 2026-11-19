extern "C" bool fn_0378f190(const void* self, int bit) {
    unsigned short mask = (unsigned short)(1 << bit);
    return (*(const unsigned short*)((const char*)self + 280) & mask) != 0;
}
