extern "C" void* fn_031968e4(void*);
extern "C" void* fn_031979fc(void*, void*, void*, void*, void*, void*);
extern "C" int fn_021a6d98(void* self)
{
    void* owner = *(void**)((char*)self + 0);
    char* vtable = *(char**)((char*)owner + 0xE8);
    void* target = (*(void* (**)(void*))(vtable + 0x30C))(owner);
    if (target != 0) {
        if (**(unsigned char**)((char*)self + 0x10) != 0) {
            fn_031968e4(target);
            return 1;
        }
        fn_031979fc(target, 0, (void*)2, 0, (void*)1, 0);
    }
    return 1;
}
