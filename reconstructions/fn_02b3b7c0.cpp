extern "C" void fn_02b3b7c0(void* object)
{
    unsigned int flags = *(unsigned char*)((char*)object + 4);
    flags &= ~2;
    *(unsigned char*)((char*)object + 4) = flags;
}
