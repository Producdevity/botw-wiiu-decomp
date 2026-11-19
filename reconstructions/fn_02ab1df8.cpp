extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023f9d34(void*, const void*);

extern "C" void* fn_02ab1df8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(140, allocator, 4);
    if (object) {
        object = fn_023f9d34(object, descriptor);
    }
    return object;
}
