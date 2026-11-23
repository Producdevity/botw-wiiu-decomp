extern "C" void fn_03464c54(void* resource);
extern "C" void fn_03463194(void* resource);

extern "C" void fn_0203c2e4(void* object) {
    void* first = *(void**)((char*)object + 0x30);
    if (first != 0) {
        fn_03464c54(first);
        *(void**)((char*)object + 0x30) = 0;
    }
    void* second = *(void**)((char*)object + 0x34);
    if (second != 0) {
        fn_03463194(second);
        *(void**)((char*)object + 0x34) = 0;
    }
}
