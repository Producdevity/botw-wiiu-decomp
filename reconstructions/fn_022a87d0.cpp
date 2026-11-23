extern "C" void* fn_0307cd30(void* list, void* key);
extern "C" void fn_03074cc0(void* entry);
extern "C" void fn_0307cd5c(void* list, void* key);
extern "C" void fn_0307cda0(void* list);
extern "C" void fn_030ea2e0(void* object);

extern "C" void fn_022a87d0(void* object) {
    void* entry = fn_0307cd30((char*)object + 0x10, **(void***)((char*)object + 0x18));
    if (entry != 0) {
        fn_03074cc0(entry);
        fn_0307cd5c((char*)object + 0x10, **(void***)((char*)object + 0x18));
        return;
    }
    fn_0307cda0((char*)object + 0x10);
    fn_030ea2e0(object);
}
