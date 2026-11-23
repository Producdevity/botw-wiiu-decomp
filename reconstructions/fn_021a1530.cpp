extern "C" void fn_03487098(void* manager, void* entry);

extern "C" void fn_021a1530(void* object) {
    void* manager = *(void**)((char*)*(void**)object + 0xF4);
    if (manager != 0) {
        fn_03487098(manager, *(void**)((char*)object + 0x18));
        *(void**)((char*)object + 0x18) = 0;
    }
}
