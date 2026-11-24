extern "C" void fn_02035cbc(void* object)
{
    unsigned int flags = *(unsigned short*)((char*)object + 4);
    flags &= ~4;
    *(unsigned short*)((char*)object + 4) = flags;
}
