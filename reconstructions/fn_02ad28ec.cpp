extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02738ec8(void*, const void*);

extern "C" void* fn_02ad28ec(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_02738ec8(object, descriptor);
    }
    return object;
}
