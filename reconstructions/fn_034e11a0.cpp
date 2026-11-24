extern "C" void fn_034e1194(void*);

extern "C" int fn_034e11a0(void* arg0)
{
    unsigned int flags = *(unsigned short*)((char*)arg0 + 0x94);
    flags &= 1;
    if (flags) {
        fn_034e1194(arg0);
        return 2;
    }
    return 5;
}
