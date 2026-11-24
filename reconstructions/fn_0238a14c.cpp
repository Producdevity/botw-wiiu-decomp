extern "C" void fn_0238a0d4(void*);
extern "C" void fn_0378a24c(void*, void*);
extern "C" void fn_03796ed8(void*);

extern "C" void fn_0238a14c(void** object)
{
    void* target = *object;
    if ((*(unsigned char*)((char*)target + 0x54) != 3 && !(*(int*)((char*)target + 0x64) & 1)) != 0U) {
        fn_0238a0d4(object);
        fn_03796ed8(target);
        fn_0378a24c(target, 0);
    }
}
