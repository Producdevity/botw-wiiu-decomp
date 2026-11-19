extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022ed4c8(void*, const void*);

extern "C" void* fn_02abbf34(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(80, allocator, 4);
    if (object) {
        object = fn_022ed4c8(object, descriptor);
    }
    return object;
}
