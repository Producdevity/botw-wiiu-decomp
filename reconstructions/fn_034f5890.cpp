extern "C" void fn_034f543c(void*, int);
extern "C" void fn_034f5478(void*);
extern "C" void fn_037d71ec(void*, int);

extern "C" void fn_034f5890(void* object)
{
    fn_037d71ec(*(void**)((char*)object + 0x28), 0);
    fn_037d71ec(*(void**)((char*)object + 0x28), 1);
    unsigned int flags = *(unsigned char*)((char*)object + 1);
    flags &= ~1;
    *(unsigned char*)((char*)object + 1) = flags;
    fn_034f543c(object, 1);
    fn_034f5478(object);
}
