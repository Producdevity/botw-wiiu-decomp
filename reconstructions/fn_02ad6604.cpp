extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0284adcc(void*, const void*);

extern "C" void* fn_02ad6604(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(172, allocator, 4);
    if (object) {
        object = fn_0284adcc(object, descriptor);
    }
    return object;
}
