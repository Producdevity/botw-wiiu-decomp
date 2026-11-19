extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0215b888(void*, const void*);

extern "C" void* fn_02ab17dc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_0215b888(object, descriptor);
    }
    return object;
}
