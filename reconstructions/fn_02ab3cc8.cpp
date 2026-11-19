extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021b37e8(void*, const void*);

extern "C" void* fn_02ab3cc8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_021b37e8(object, descriptor);
    }
    return object;
}
