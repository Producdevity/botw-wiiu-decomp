extern "C" void fn_02035dec(void* object)
{
    unsigned int flags = *(unsigned short*)((char*)object + 4);
    flags &= ~0x10;
    *(unsigned short*)((char*)object + 4) = flags;
}
