extern "C" void fn_0294c4d4(void* owner, int value, int a, int b);
extern "C" void fn_029505e4(void* owner, int value);
extern "C" int fn_02b62a40();
extern "C" void fn_02b7580c(void* owner);

extern "C" int fn_0223ea6c(void* object) {
    fn_02b7580c(*(void**)object);
    int value = fn_02b62a40();
    fn_029505e4(*(void**)object, value);
    if (**(unsigned char**)((char*)object + 0x10) != 0) {
        fn_0294c4d4(*(void**)object, value, 1, 1);
    }
    return 1;
}
