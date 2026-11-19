extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022e37dc(void*, const void*);

extern "C" void* fn_02abbbc0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(124, allocator, 4);
    if (object) {
        object = fn_022e37dc(object, descriptor);
    }
    return object;
}
