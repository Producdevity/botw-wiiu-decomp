extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0297ba94(void*, const void*);

extern "C" void* fn_02adb570(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_0297ba94(object, descriptor);
    }
    return object;
}
