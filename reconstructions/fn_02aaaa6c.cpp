extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0311a4d8(void*, const void*);

extern "C" void* fn_02aaaa6c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_0311a4d8(object, descriptor);
    }
    return object;
}
