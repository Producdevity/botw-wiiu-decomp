extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0286a684(void*, const void*);

extern "C" void* fn_02ad6dfc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(100, allocator, 4);
    if (object) {
        object = fn_0286a684(object, descriptor);
    }
    return object;
}
