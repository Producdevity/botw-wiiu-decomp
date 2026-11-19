extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021908b0(void*, const void*);

extern "C" void* fn_02ab304c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(140, allocator, 4);
    if (object) {
        object = fn_021908b0(object, descriptor);
    }
    return object;
}
