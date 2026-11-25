extern "C" int fn_03a27814(void* self)
{
    char* object = (char*)self;
    unsigned char state = *(unsigned char*)(object + 0x1C);
    switch (state) {
    case 0:
    case 2:
        (*(void (**)(void*))(*(char**)(object + 0x10) + 0xAC))(self);
        (*(void (**)(void*, int))(*(char**)(object + 0x10) + 0xEC))(self, 1);
        return 1;
    case 4:
    case 6:
        return 0;
    default:
        return 1;
    }
}
