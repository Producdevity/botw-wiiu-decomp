extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0244d2a0(void*, const void*);

extern "C" void* fn_02ac6dfc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_0244d2a0(object, descriptor);
    }
    return object;
}
