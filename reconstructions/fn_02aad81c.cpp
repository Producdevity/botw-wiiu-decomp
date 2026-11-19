extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020ce320(void*, const void*);

extern "C" void* fn_02aad81c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(100, allocator, 4);
    if (object) {
        object = fn_020ce320(object, descriptor);
    }
    return object;
}
