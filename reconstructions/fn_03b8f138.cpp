extern "C" void fn_03b8f138(unsigned short* flags, int bit) {
    unsigned short mask = 1;
    unsigned short value = *flags;
    mask <<= bit;
    value |= mask;
    *flags = value;
}
