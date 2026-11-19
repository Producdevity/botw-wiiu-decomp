extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024f92ec(void*, const void*);

extern "C" void* fn_02aca1b8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(956, allocator, 4);
    if (object) {
        object = fn_024f92ec(object, descriptor);
    }
    return object;
}
