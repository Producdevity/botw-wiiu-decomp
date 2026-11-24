extern "C" void fn_030bb668(void*);
extern "C" void fn_030bb69c(void*);
extern "C" void fn_034588ec(void*);

extern "C" void fn_03458e10(void* object)
{
    fn_030bb668((char*)object + 0x28);
    unsigned int flags = *(unsigned short*)((char*)object + 0x26);
    if ((flags >> 1) & 1) {
        fn_034588ec(object);
    }
    fn_030bb69c((char*)object + 0x28);
}
