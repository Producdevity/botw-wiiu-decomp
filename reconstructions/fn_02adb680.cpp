extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029804d8(void*, const void*);

extern "C" void* fn_02adb680(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(796, allocator, 4);
    if (object) {
        object = fn_029804d8(object, descriptor);
    }
    return object;
}
