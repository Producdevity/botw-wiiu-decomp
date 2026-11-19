extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0231f9bc(void*, const void*);

extern "C" void* fn_02abd3ec(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_0231f9bc(object, descriptor);
    }
    return object;
}
