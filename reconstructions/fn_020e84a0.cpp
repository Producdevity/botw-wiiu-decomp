extern "C" void fn_020e3d54(void* object);
extern "C" void fn_020e45dc(void* object);

extern "C" void fn_020e84a0(void* object) {
    if (**(unsigned char**)((char*)object + 0x100) != 0) {
        fn_020e3d54(object);
    }
    fn_020e45dc(object);
}
