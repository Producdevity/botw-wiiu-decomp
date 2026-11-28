extern "C" void fn_03a4d6dc(void*);

extern "C" void fn_0367d128(unsigned char* flags, int notify)
{
    if (notify != 0) {
        fn_03a4d6dc(flags + 0x14);
    }
    unsigned int value = *flags;
    value &= ~2;
    *flags = value;
}
