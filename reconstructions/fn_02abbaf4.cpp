extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022e0c68(void*, const void*);

extern "C" void* fn_02abbaf4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(120, allocator, 4);
    if (object) {
        object = fn_022e0c68(object, descriptor);
    }
    return object;
}
