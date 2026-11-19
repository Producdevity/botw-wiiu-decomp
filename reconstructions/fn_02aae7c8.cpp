extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020f89a4(void*, const void*);

extern "C" void* fn_02aae7c8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(96, allocator, 4);
    if (object) {
        object = fn_020f89a4(object, descriptor);
    }
    return object;
}
