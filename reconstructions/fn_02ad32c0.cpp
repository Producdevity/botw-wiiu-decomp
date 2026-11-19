extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02760e7c(void*, const void*);

extern "C" void* fn_02ad32c0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(160, allocator, 4);
    if (object) {
        object = fn_02760e7c(object, descriptor);
    }
    return object;
}
