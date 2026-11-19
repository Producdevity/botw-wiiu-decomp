extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0268f89c(void*, const void*);

extern "C" void* fn_02ad090c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(152, allocator, 4);
    if (object) {
        object = fn_0268f89c(object, descriptor);
    }
    return object;
}
