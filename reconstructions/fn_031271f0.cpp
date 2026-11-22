extern "C" void* fn_03126a74(void* map, const void* key);
extern "C" void* fn_037b4dd0(void);

extern "C" void* fn_031271f0(void* map, const void* key) {
    unsigned char* node = static_cast<unsigned char*>(fn_03126a74(map, key));
    if (node) {
        return node + 0x10;
    }
    return fn_037b4dd0();
}
