extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0222f0ec(void*, const void*);

extern "C" void* fn_02ab7ea8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(140, allocator, 4);
    if (object) {
        object = fn_0222f0ec(object, descriptor);
    }
    return object;
}
