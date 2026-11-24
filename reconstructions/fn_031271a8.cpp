extern "C" void* fn_03126a74(void* map, const void* key);
extern "C" void fn_0378da14(void* handle);

extern "C" bool fn_031271a8(void* map, const void* key) {
    void* entry = fn_03126a74(map, key);
    if (entry) {
        fn_0378da14((char*)entry + 0x10);
        return true;
    }
    return false;
}
