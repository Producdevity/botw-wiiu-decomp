extern "C" void fn_0339a080(void* owner);
extern "C" void fn_030ea2cc(void* object);
extern "C" void fn_0339a0c4(void* owner);

extern "C" void fn_023a7250(void* object) {
    void* owner = *(void**)object;
    if (**(unsigned char**)((char*)object + 0x10) != 0) {
        fn_0339a080(owner);
        fn_030ea2cc(object);
        return;
    }
    fn_0339a0c4(owner);
    fn_030ea2cc(object);
}
