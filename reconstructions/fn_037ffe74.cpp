extern "C" void fn_037ffe74(void* object)
{
    void* owner = *(void**)((char*)object + 0x120);
    (*(void (**)(void*))((char*)*(void**)((char*)owner + 0xC) + 0x5C))(owner);
    void* target = *(void**)((char*)object + 0x120);
    unsigned int flags = *(unsigned short*)((char*)target + 0x90) | 2;
    *(unsigned short*)((char*)target + 0x90) = flags;
}
