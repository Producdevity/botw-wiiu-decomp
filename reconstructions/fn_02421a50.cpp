extern "C" void fn_02b63234(void*, void*, int);

extern "C" void fn_02421a50(void* object)
{
    fn_02b63234(*(void**)object, (char*)object + 0x38, **(unsigned char**)((char*)object + 0x1C));
    void* child = *(void**)((char*)*(void**)object + 0x3B0);
    if (child != 0) {
        unsigned int flags = *(unsigned short*)((char*)child + 0x26);
        flags &= ~1;
        *(unsigned short*)((char*)child + 0x26) = flags;
    }
}
