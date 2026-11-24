extern "C" int fn_0258a510(void);
extern "C" int fn_0258a158(void* self)
{
    void* object = self;
    if (fn_0258a510() == 0) {
        return 0;
    }
    **(char**)((char*)object + 0x28) = 0;
    return 1;
}
