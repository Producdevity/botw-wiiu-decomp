extern "C" void fn_0204df4c(unsigned short* flags, int bit) {
    unsigned short mask = 1;
    unsigned short value = *flags;
    mask <<= bit;
    value |= mask;
    *flags = value;
}
