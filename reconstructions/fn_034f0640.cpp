extern "C" void fn_034f0640(void* object)
{
    unsigned int flags = *(unsigned char*)((char*)object + 8);
    flags &= ~1;
    *(unsigned char*)((char*)object + 8) = flags;
}
