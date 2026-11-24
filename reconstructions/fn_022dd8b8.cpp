extern "C" int fn_022d2fcc(void);
extern "C" int fn_022dd8b8(void* self)
{
    void* object = self;
    if (fn_022d2fcc() == 0) {
        return 0;
    }
    *(int*)((char*)object + 0xAC) = 0;
    return 1;
}
