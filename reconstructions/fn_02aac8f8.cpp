extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_03508b4c(void*, const void*);

extern "C" void* fn_02aac8f8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_03508b4c(object, descriptor);
    }
    return object;
}
