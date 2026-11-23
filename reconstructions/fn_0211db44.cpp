extern "C" void fn_0379c1b4(void* owner, void* value, void* extra);
extern "C" void fn_02c19bfc(void* resource);

extern "C" void fn_0211db44(void* object) {
    fn_0379c1b4(*(void**)object, (void*)0x20, 0);
    void* resource = *(void**)((char*)object + 0x2C);
    if (resource != 0) {
        fn_02c19bfc(resource);
        *(void**)((char*)object + 0x2C) = 0;
    }
}
