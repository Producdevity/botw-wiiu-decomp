extern "C" void fn_03511fe4(void*, void*);

extern "C" void fn_03514ffc(void* object, void* arg)
{
    int flag = *(unsigned char*)((char*)object + 0x64);
    if (flag != 0) {
        void* member = (char*)object + 4;
        fn_03511fe4(member, arg);
        *(unsigned char*)((char*)object + 0x64) = 0;
    }
}
