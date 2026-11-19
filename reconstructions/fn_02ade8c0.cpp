extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029c99d4(void*, const void*);

extern "C" void* fn_02ade8c0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_029c99d4(object, descriptor);
    }
    return object;
}
