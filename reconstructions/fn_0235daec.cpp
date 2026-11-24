extern "C" int fn_0210732c(void);
extern "C" int fn_0235daec(void* self)
{
    char* object = (char*)self;
    if (fn_0210732c() == 0) {
        return 0;
    }
    *(char*)(object + 0x2C) = 0;
    return 1;
}
