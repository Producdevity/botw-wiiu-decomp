extern "C" void fn_029509ac(void*);
extern "C" int fn_03185930(void*, void*);

extern "C" void fn_026f3814(void** arg0, void* arg1)
{
    void** slot = (void**)((char*)*arg0 + 0x3B4);
    char* obj = (char*)fn_03185930(*slot, arg1);
    if (obj != 0) {
        unsigned int flags = *(unsigned short*)(obj + 0x60);
        flags &= 0xFFFFFFCF;
        *(unsigned short*)(obj + 0x60) = flags;
    }
    fn_029509ac(*arg0);
}
