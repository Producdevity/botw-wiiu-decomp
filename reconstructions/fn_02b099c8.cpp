extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a7665c(void*, const void*);

extern "C" void* fn_02b099c8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_02a7665c(object, descriptor);
    }
    return object;
}
