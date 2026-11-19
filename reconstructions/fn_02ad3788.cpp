extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0276c6c0(void*, const void*);

extern "C" void* fn_02ad3788(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(52, allocator, 4);
    if (object) {
        object = fn_0276c6c0(object, descriptor);
    }
    return object;
}
