extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022e56bc(void*, const void*);

extern "C" void* fn_02abbc04(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(96, allocator, 4);
    if (object) {
        object = fn_022e56bc(object, descriptor);
    }
    return object;
}
