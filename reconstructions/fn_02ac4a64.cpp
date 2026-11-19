extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023df3d0(void*, const void*);

extern "C" void* fn_02ac4a64(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(108, allocator, 4);
    if (object) {
        object = fn_023df3d0(object, descriptor);
    }
    return object;
}
