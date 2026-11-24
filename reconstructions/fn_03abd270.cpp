extern "C" void fn_03ac4e2c(void*, void*);
extern "C" void* data_1047eb9c;
extern "C" void fn_03abd270(void* self)
{
    char* object = (char*)self;
    void* handle = *(void**)(object + 0x3C);
    if (handle != 0) {
        if (*(unsigned char*)(object + 0x51) != 0) {
            fn_03ac4e2c(data_1047eb9c, handle);
        }
        *(void**)(object + 0x3C) = 0;
        unsigned char* flag = (unsigned char*)self + 0x51;
        unsigned char cleared = 0;
        *flag = cleared;
    }
}
