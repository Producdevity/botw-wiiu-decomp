extern "C" void fn_0317f638(void* resource);
extern "C" void fn_025c7b60(void** object);

extern "C" void fn_0250e984(void** object) {
    void* resource = *(void**)((char*)*object + 0x38C);
    if (resource != 0) {
        fn_0317f638(resource);
    }
    fn_025c7b60(object);
}
