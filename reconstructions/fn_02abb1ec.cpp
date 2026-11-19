extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022c1a04(void*, const void*);

extern "C" void* fn_02abb1ec(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(156, allocator, 4);
    if (object) {
        object = fn_022c1a04(object, descriptor);
    }
    return object;
}
