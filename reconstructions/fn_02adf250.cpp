extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029d3498(void*, const void*);

extern "C" void* fn_02adf250(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_029d3498(object, descriptor);
    }
    return object;
}
