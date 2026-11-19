extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02299010(void*, const void*);

extern "C" void* fn_02aba52c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(72, allocator, 4);
    if (object) {
        object = fn_02299010(object, descriptor);
    }
    return object;
}
