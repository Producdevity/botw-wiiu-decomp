extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024f8af0(void*, const void*);

extern "C" void* fn_02aca0ec(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(72, allocator, 4);
    if (object) {
        object = fn_024f8af0(object, descriptor);
    }
    return object;
}
