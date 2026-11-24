extern "C" void fn_03a4d614(void* object)
{
    unsigned int flags = *(unsigned char*)((char*)object + 12);
    flags &= ~1;
    *(unsigned char*)((char*)object + 12) = flags;
}
