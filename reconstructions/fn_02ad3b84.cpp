extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02795b34(void*, const void*);

extern "C" void* fn_02ad3b84(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(792, allocator, 4);
    if (object) {
        object = fn_02795b34(object, descriptor);
    }
    return object;
}
