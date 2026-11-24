extern "C" void fn_0363d0b8(void*);
extern "C" void fn_03661a58(void*);
extern "C" void fn_036732a0(void* self)
{
    char* object = (char*)self;
    void* first = 0;
    if (*(int*)(object + 0x45C) != 0) {
        first = *(void**)(*(char**)((char*)self + 0x464) + 0);
    }
    void* target = first;
    fn_03661a58(target);
    void* second = 0;
    if (*(unsigned int*)((char*)self + 0x45C) > 6) {
        second = *(void**)(*(char**)((char*)self + 0x464) + 0x18);
    }
    fn_0363d0b8(second);
}
