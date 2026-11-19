extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022970f8(void*, const void*);

extern "C" void* fn_02aba460(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(176, allocator, 4);
    if (object) {
        object = fn_022970f8(object, descriptor);
    }
    return object;
}
