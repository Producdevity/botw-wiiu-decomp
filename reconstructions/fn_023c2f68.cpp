extern "C" void fn_0339a0c4(void* owner);
extern "C" void fn_0339a1a0(void* owner);
extern "C" void fn_0339a080(void* owner);

extern "C" void fn_023c2f68(void* object) {
    void* owner = *(void**)object;
    if (**(unsigned char**)((char*)object + 0x14) != 0) {
        fn_0339a0c4(owner);
        fn_0339a1a0(*(void**)object);
        return;
    }
    fn_0339a080(owner);
}
