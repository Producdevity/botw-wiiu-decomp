extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0296b948(void*, const void*);

extern "C" void* fn_02adb020(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(96, allocator, 4);
    if (object) {
        object = fn_0296b948(object, descriptor);
    }
    return object;
}
