extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0289c57c(void*, const void*);

extern "C" void* fn_02ad7e30(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(72, allocator, 4);
    if (object) {
        object = fn_0289c57c(object, descriptor);
    }
    return object;
}
