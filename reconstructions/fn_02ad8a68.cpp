extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028ea69c(void*, const void*);

extern "C" void* fn_02ad8a68(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(96, allocator, 4);
    if (object) {
        object = fn_028ea69c(object, descriptor);
    }
    return object;
}
