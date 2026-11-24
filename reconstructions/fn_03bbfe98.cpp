extern "C" void fn_03bbfd64(void*);
extern "C" void fn_03bbfe30(void*);

extern "C" void fn_03bbfe98(void* object, void* arg)
{
    int flag = *(unsigned char*)((char*)object + 4);
    if (flag != 0) {
        int value = 0;
        unsigned char* field = (unsigned char*)object + 4;
        fn_03bbfd64(object);
        fn_03bbfe30(object);
        *field = value;
    }
}
