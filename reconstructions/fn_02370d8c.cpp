extern "C" int fn_02371a44(void);
extern "C" int fn_02370d8c(void* self)
{
    char* object = (char*)self;
    if (fn_02371a44() == 0) {
        return 0;
    }
    *(char*)(object + 0x2A4) = 0;
    return 1;
}
