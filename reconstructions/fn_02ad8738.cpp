extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028d3b34(void*, const void*);

extern "C" void* fn_02ad8738(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(676, allocator, 4);
    if (object) {
        object = fn_028d3b34(object, descriptor);
    }
    return object;
}
