extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_03324e1c(void*, const void*);

extern "C" void* fn_02aabcc0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(120, allocator, 4);
    if (object) {
        object = fn_03324e1c(object, descriptor);
    }
    return object;
}
