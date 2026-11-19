extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02090f90(void*, const void*);

extern "C" void* fn_02ac2ce8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(296, allocator, 4);
    if (object) {
        object = fn_02090f90(object, descriptor);
    }
    return object;
}
