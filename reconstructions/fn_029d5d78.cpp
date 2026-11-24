extern "C" int fn_029d4c98(void);
extern "C" int fn_029d5d78(void* self)
{
    char* object = (char*)self;
    if (fn_029d4c98() == 0) {
        return 0;
    }
    *(int*)(object + 0x30) = **(int**)(object + 0x18);
    return 1;
}
