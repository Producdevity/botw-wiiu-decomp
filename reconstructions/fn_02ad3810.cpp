extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0276f738(void*, const void*);

extern "C" void* fn_02ad3810(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_0276f738(object, descriptor);
    }
    return object;
}
