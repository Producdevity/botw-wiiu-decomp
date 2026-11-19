extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022a5fdc(void*, const void*);

extern "C" void* fn_02abac9c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_022a5fdc(object, descriptor);
    }
    return object;
}
