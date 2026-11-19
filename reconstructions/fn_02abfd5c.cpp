extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02c99394(void*, const void*);

extern "C" void* fn_02abfd5c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_02c99394(object, descriptor);
    }
    return object;
}
