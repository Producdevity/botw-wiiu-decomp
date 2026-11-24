extern "C" void fn_038308e4(void* object)
{
    unsigned int flags = *(unsigned short*)((char*)object + 20);
    flags &= ~1;
    *(unsigned short*)((char*)object + 20) = flags;
}
