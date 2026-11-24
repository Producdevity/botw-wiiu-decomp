extern "C" void fn_02974784(void* object)
{
    unsigned int flags = *(unsigned char*)((char*)object + 52);
    flags &= ~1;
    *(unsigned char*)((char*)object + 52) = flags;
}
