extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a90b8c(void*, const void*);

extern "C" void* fn_02b0a534(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02a90b8c(object, descriptor);
    }
    return object;
}
