extern "C" unsigned int fn_0348609c(int);
extern "C" void fn_03489294(void*, int);
extern "C" void fn_0348dc74(void*);

extern "C" void fn_0336316c(void* object)
{
    unsigned int flags = *(unsigned short*)((char*)object + 0x44);
    flags &= ~0x10;
    *(unsigned short*)((char*)object + 0x44) = flags;
    if (fn_0348609c(*(int*)((char*)object + 8)) != 1) {
        fn_0348dc74(*(void**)((char*)object + 8));
        fn_03489294(*(void**)((char*)object + 8), 1);
    }
}
