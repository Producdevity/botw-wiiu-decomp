extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022a7ea0(void*, const void*);

extern "C" void* fn_02ab2128(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_022a7ea0(object, descriptor);
    }
    return object;
}
