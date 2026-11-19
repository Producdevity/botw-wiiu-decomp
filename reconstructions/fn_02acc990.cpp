extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0258449c(void*, const void*);

extern "C" void* fn_02acc990(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(184, allocator, 4);
    if (object) {
        object = fn_0258449c(object, descriptor);
    }
    return object;
}
