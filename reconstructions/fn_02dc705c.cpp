extern "C" void fn_02dc6f98(void*);
extern "C" void fn_0307104c(void);
extern "C" void fn_032bd308(void*);

extern "C" void fn_02dc705c(void* object)
{
    *(unsigned char*)((char*)object + 0x18) = 0;
    *(unsigned char*)((char*)object + 0x19) = 0;
    fn_032bd308((char*)object + 0x74);
    fn_02dc6f98(object);
    fn_0307104c();
}
