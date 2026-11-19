extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023109cc(void*, const void*);

extern "C" void* fn_02abcb6c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_023109cc(object, descriptor);
    }
    return object;
}
