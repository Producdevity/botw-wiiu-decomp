extern "C" void fn_030980d4(void*);

extern "C" void fn_03422eb4(void* object)
{
    int flag = *(unsigned char*)((char*)object + 0x6D);
    if (flag == 0) {
        fn_030980d4((char*)object + 0x20);
        *(unsigned char*)((char*)object + 0x6D) = 1;
    }
}
