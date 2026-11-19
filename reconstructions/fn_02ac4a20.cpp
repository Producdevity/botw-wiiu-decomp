extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023dcbf8(void*, const void*);

extern "C" void* fn_02ac4a20(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(192, allocator, 4);
    if (object) {
        object = fn_023dcbf8(object, descriptor);
    }
    return object;
}
