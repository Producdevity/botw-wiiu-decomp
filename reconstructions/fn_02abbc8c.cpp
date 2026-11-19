extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022e5d3c(void*, const void*);

extern "C" void* fn_02abbc8c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(156, allocator, 4);
    if (object) {
        object = fn_022e5d3c(object, descriptor);
    }
    return object;
}
