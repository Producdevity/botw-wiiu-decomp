extern "C" void fn_0317f638(void* resource);
extern "C" void fn_0256b8ec(void** object);

extern "C" void fn_0256b9b0(void** object) {
    void* resource = *(void**)((char*)*object + 0x38C);
    if (resource != 0) {
        fn_0317f638(resource);
    }
    fn_0256b8ec(object);
}
