extern "C" void fn_026a64dc(void* object);
extern "C" void fn_0294f720(void* owner, int mode, void* data);

extern "C" void fn_026a64ec(void* object) {
    if (**(unsigned char**)((char*)object + 0x34) != 0) {
        fn_0294f720(*(void**)object, 2, (char*)object + 0x20);
    }
    fn_026a64dc(object);
}
