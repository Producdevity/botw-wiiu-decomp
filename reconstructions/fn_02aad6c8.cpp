extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020c91a0(void*, const void*);

extern "C" void* fn_02aad6c8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_020c91a0(object, descriptor);
    }
    return object;
}
