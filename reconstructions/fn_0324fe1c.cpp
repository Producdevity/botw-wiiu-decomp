extern "C" void fn_0324fe1c(void* object)
{
    unsigned int flags = *(unsigned short*)((char*)object + 204);
    flags &= ~0x100;
    *(unsigned short*)((char*)object + 204) = flags;
}
