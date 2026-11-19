extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028bf6a8(void*, const void*);

extern "C" void* fn_02ad85a0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(108, allocator, 4);
    if (object) {
        object = fn_028bf6a8(object, descriptor);
    }
    return object;
}
