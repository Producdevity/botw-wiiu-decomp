extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021a3250(void*, const void*);

extern "C" void* fn_02ab3734(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_021a3250(object, descriptor);
    }
    return object;
}
