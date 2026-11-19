extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020bf90c(void*, const void*);

extern "C" void* fn_02aad1bc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_020bf90c(object, descriptor);
    }
    return object;
}
