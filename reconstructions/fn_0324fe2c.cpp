extern "C" void fn_0324fe2c(void* object)
{
    unsigned int flags = *(unsigned short*)((char*)object + 204);
    flags &= ~8;
    *(unsigned short*)((char*)object + 204) = flags;
}
