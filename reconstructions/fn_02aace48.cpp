extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0230b9f8(void*, const void*);

extern "C" void* fn_02aace48(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(80, allocator, 4);
    if (object) {
        object = fn_0230b9f8(object, descriptor);
    }
    return object;
}
