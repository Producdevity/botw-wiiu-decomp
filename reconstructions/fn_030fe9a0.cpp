extern "C" void fn_030fe9a0(unsigned short* flags, int bit) {
    unsigned short mask = 1;
    unsigned short value = *flags;
    mask <<= bit;
    value |= mask;
    *flags = value;
}
