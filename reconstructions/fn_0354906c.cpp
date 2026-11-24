extern "C" void fn_0354ebac(void*);
extern "C" void fn_03bb6048(int);

extern "C" void fn_0354906c(void* object)
{
    fn_03bb6048((int)object + 0xEC);
    fn_0354ebac(object);
    if (*(int*)((char*)object + 0x6C) == 0) {
        *(unsigned char*)((char*)object + 0x122) = 0;
    }
}
