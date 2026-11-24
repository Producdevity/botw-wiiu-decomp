extern "C" void fn_03511f40(void*, void*);

extern "C" void fn_035158b0(void* object, void* arg)
{
    int flag = *(unsigned char*)((char*)object + 0x64);
    if (flag == 0) {
        void* member = (char*)object + 4;
        fn_03511f40(member, arg);
        *(unsigned char*)((char*)object + 0x64) = 1;
    }
}
