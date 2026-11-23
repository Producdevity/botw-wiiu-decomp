extern "C" void fn_02b54174(void* owner);
extern "C" void fn_02b542b8(void* owner);
extern "C" void fn_02b54b50(void* owner);

extern "C" void fn_0221b898(void* object) {
    void* owner = *(void**)object;
    fn_02b54174(owner);
    fn_02b542b8(owner);
    if (**(unsigned char**)((char*)object + 0x18) != 0) {
        fn_02b54b50(owner);
    }
}
