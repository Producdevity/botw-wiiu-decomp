extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0258a4a0(void*, const void*);

extern "C" void* fn_02accbb0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_0258a4a0(object, descriptor);
    }
    return object;
}
