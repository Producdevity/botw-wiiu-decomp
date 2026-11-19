extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02d01c9c(void*, const void*);

extern "C" void* fn_02ad4d0c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_02d01c9c(object, descriptor);
    }
    return object;
}
