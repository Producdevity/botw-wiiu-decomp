extern "C" void fn_03458948(void* resource);

extern "C" void fn_02052058(void* object) {
    void* first = *(void**)((char*)object + 0x20);
    if (first != 0) {
        fn_03458948(first);
        *(void**)((char*)object + 0x20) = 0;
    }
    void* second = *(void**)((char*)object + 0x24);
    if (second != 0) {
        fn_03458948(second);
        *(void**)((char*)object + 0x24) = 0;
    }
}
