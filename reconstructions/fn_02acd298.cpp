extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025a92bc(void*, const void*);

extern "C" void* fn_02acd298(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_025a92bc(object, descriptor);
    }
    return object;
}
