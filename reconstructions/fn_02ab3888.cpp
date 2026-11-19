extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021a5ec4(void*, const void*);

extern "C" void* fn_02ab3888(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_021a5ec4(object, descriptor);
    }
    return object;
}
