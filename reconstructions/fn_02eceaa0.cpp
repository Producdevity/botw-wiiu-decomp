extern "C" void fn_02eceaa0(void* object)
{
    int flags = *(unsigned char*)((char*)object + 44) & 0xf8;
    unsigned char* slot = (unsigned char*)((char*)object + 44);
    *slot = flags;
}
