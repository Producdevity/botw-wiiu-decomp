extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020c8b84(void*, const void*);

extern "C" void* fn_02aad684(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(56, allocator, 4);
    if (object) {
        object = fn_020c8b84(object, descriptor);
    }
    return object;
}
