extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02979ac4(void*, const void*);

extern "C" void* fn_02adb4e8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(252, allocator, 4);
    if (object) {
        object = fn_02979ac4(object, descriptor);
    }
    return object;
}
