extern "C" void fn_030bb668(void*);
extern "C" void fn_030bb69c(void*);

extern "C" void fn_03bd3fcc(void* object)
{
    void* lock = (char*)object + 0x4C;
    fn_030bb668(lock);
    *(int*)((char*)object + 0xC) = 0;
    *(int*)((char*)object + 0x10) = 0;
    fn_030bb69c(lock);
}
