extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029d3a1c(void*, const void*);

extern "C" void* fn_02adf294(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_029d3a1c(object, descriptor);
    }
    return object;
}
