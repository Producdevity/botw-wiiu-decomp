extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020ccc0c(void*, const void*);

extern "C" void* fn_02aad750(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_020ccc0c(object, descriptor);
    }
    return object;
}
