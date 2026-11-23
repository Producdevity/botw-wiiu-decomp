extern "C" void fn_035960f4(void* target, void* value, void* extra);
extern "C" void fn_0350b448(void* object);
extern "C" void fn_035963a4(void* target);

extern "C" void fn_0350be88(void* object) {
    void* value = *(void**)((char*)object + 0x20);
    *((signed char*)object + 0x10) = 0;
    if (value != 0) {
        void* target = *(void**)((char*)object + 0x14);
        if (target != 0) {
            fn_035960f4(target, value, (void*)-1);
        }
    }
    fn_0350b448(object);
    void* target = *(void**)((char*)object + 0x14);
    if (target != 0) {
        fn_035963a4(target);
    }
}
