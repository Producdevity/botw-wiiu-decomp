extern "C" int fn_03a27a4c(void* self)
{
    char* object = (char*)self;
    unsigned char state = *(unsigned char*)(object + 0x1C);
    switch (state) {
    case 4:
        return 0;
    case 5:
        (*(void (**)(void*))(*(char**)(object + 0x10) + 0xC4))(self);
        (*(void (**)(void*, int))(*(char**)(object + 0x10) + 0xEC))(self, 6);
        return 1;
    default:
        return 1;
    }
}
