extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023632c4(void*, const void*);

extern "C" void* fn_02ac1be8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(152, allocator, 4);
    if (object) {
        object = fn_023632c4(object, descriptor);
    }
    return object;
}
