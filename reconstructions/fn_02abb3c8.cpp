extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022c7684(void*, const void*);

extern "C" void* fn_02abb3c8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(100, allocator, 4);
    if (object) {
        object = fn_022c7684(object, descriptor);
    }
    return object;
}
