extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021b4928(void*, const void*);

extern "C" void* fn_02ab3d50(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_021b4928(object, descriptor);
    }
    return object;
}
