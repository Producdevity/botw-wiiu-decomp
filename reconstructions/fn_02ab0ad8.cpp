extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02140d7c(void*, const void*);

extern "C" void* fn_02ab0ad8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(296, allocator, 4);
    if (object) {
        object = fn_02140d7c(object, descriptor);
    }
    return object;
}
