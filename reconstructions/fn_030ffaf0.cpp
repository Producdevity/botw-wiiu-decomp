
extern "C" int fn_030ffaf0(void* self)
{
    if (*(unsigned char*)((char*)self + 7) == 2) {
        (*(void (**)(void*))(*(char**)((char*)self + 0x10) + 0x4C))(self);
        *(unsigned char*)((char*)self + 7) = 0;
    }
    char* object = (char*)self;
    return *(int*)(object + 0xC);
}
