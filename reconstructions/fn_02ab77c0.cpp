extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0221e714(void*, const void*);

extern "C" void* fn_02ab77c0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(72, allocator, 4);
    if (object) {
        object = fn_0221e714(object, descriptor);
    }
    return object;
}
