extern "C" void fn_027233b4(void*);

extern "C" void fn_02635880(void* self)
{
    fn_027233b4(self);
    *(unsigned char*)((char*)self + 0x1E9) = 0;
    *(unsigned char*)((char*)self + 0x1E8) = 0;
    unsigned char* flags = (unsigned char*)((char*)self + 0xB);
    *flags = *flags | 4;
}
