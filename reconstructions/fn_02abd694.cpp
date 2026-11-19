extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02333c3c(void*, const void*);

extern "C" void* fn_02abd694(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(72, allocator, 4);
    if (object) {
        object = fn_02333c3c(object, descriptor);
    }
    return object;
}
