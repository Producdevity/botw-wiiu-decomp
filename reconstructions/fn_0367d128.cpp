extern "C" void fn_03a4d6dc(void*);

extern "C" void fn_0367d128(unsigned char* arg0, int arg1)
{
    if (arg1 != 0) {
        fn_03a4d6dc(arg0 + 0x14);
    }
    unsigned int flags = *arg0;
    flags &= ~2;
    *arg0 = flags;
}
