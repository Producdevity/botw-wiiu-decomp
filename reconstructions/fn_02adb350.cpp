extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02973d64(void*, const void*);

extern "C" void* fn_02adb350(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_02973d64(object, descriptor);
    }
    return object;
}
