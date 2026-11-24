extern "C" int fn_0289d434(void);
extern "C" int fn_027d73b4(void* self)
{
    char* object = (char*)self;
    if (fn_0289d434() == 0) {
        return 0;
    }
    *(int*)(object + 0x98) = 0;
    return 1;
}
