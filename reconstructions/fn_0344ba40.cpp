extern "C" void fn_0344ba40(void* object)
{
    unsigned int flags = *(unsigned short*)((char*)object + 230);
    flags &= ~0x1000;
    *(unsigned short*)((char*)object + 230) = flags;
}
