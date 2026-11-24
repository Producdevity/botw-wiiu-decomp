extern "C" void fn_02b30fbc(void*, void*);
extern "C" void fn_02b31208(void*);

extern "C" void fn_02b31450(void* object, void* arg)
{
    int flag = *(unsigned char*)((char*)object + 0x50);
    if (flag == 0) {
        int value = 1;
        unsigned char* field = (unsigned char*)object + 0x50;
        *field = value;
        fn_02b30fbc(object, arg);
        fn_02b31208(object);
    }
}
