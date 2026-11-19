extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a6b9bc(void*, const void*);

extern "C" void* fn_02b09544(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_02a6b9bc(object, descriptor);
    }
    return object;
}
