extern "C" void fn_030ea2cc(void*);
extern "C" void fn_0239a1b4(void* self)
{
    char* object = (char*)self;
    int value = **(int**)(object + 0x10);
    void (**handler)(void*);
    if (value == 0) {
        handler = (void (**)(void*))(*(char**)(object + 0xC) + 0x104);
        (*handler)(self);
    }
    *(unsigned char*)(object + 0xB) |= 4;
    fn_030ea2cc(self);
}
