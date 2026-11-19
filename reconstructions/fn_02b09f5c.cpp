extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a844ec(void*, const void*);

extern "C" void* fn_02b09f5c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02a844ec(object, descriptor);
    }
    return object;
}
