extern "C" void fn_02e5f2a8(void* object)
{
    unsigned int flags = *(unsigned char*)((char*)object + 313);
    flags &= ~1;
    *(unsigned char*)((char*)object + 313) = flags;
}
