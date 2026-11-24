
extern "C" int fn_030ffb44(void* self)
{
    if (*(unsigned char*)((char*)self + 7) == 1) {
        (*(void (**)(void*))(*(char**)((char*)self + 0x10) + 0x44))(self);
    }
    void* object = self;
    *(unsigned char*)((char*)object + 7) = 0;
    return *(int*)((char*)object + 0xC);
}
