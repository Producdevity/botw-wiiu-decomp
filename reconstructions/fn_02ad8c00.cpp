extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028ee38c(void*, const void*);

extern "C" void* fn_02ad8c00(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_028ee38c(object, descriptor);
    }
    return object;
}
