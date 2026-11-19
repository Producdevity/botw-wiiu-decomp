extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028587bc(void*, const void*);

extern "C" void* fn_02ad6a88(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_028587bc(object, descriptor);
    }
    return object;
}
