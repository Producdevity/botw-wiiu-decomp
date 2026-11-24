extern "C" void fn_030bb668(void*);
extern "C" void fn_030bb69c(void*);

extern "C" void fn_038b5ccc(void* object)
{
    char* base;
    fn_030bb668(object);
    base = *(char**)((char*)object + 0x48);
    (*(void (**)(void*))(base + 0x54))(object);
    base = (char*)object + 0x3C;
    *(int*)base = 0;
    fn_030bb69c(object);
}
