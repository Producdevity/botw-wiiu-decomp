extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024538ec(void*, const void*);

extern "C" void* fn_02ac6e40(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_024538ec(object, descriptor);
    }
    return object;
}
