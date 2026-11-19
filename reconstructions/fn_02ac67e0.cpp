extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02444d78(void*, const void*);

extern "C" void* fn_02ac67e0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(124, allocator, 4);
    if (object) {
        object = fn_02444d78(object, descriptor);
    }
    return object;
}
