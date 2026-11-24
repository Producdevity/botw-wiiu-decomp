extern "C" void fn_039e6a24(void*);

extern "C" void fn_039e6c54(unsigned char* flags)
{
    if (*flags & 1) {
        fn_039e6a24(flags);
        int mask = ~1;
        *flags &= mask;
    }
}
