extern "C" void fn_02b74ac8(void* owner);
extern "C" void fn_0348e0e0(void* manager, void* value);
extern "C" void fn_028fd050(void* object, void* value);

extern "C" void fn_028fe258(void* object) {
    fn_02b74ac8(*(void**)object);
    void* manager = *(void**)((char*)*(void**)object + 0xF4);
    if (manager != 0) {
        fn_0348e0e0(manager, (void*)*((unsigned char*)object + 0x9C));
    }
    fn_028fd050(object, (void*)1);
}
