extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02c6a31c(void*, const void*);

extern "C" void* fn_02abf09c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02c6a31c(object, descriptor);
    }
    return object;
}
