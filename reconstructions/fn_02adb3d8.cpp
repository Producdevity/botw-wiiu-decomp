extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02974b7c(void*, const void*);

extern "C" void* fn_02adb3d8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_02974b7c(object, descriptor);
    }
    return object;
}
