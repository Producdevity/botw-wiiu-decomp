extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021a9f64(void*, const void*);

extern "C" void* fn_02ab3aa8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_021a9f64(object, descriptor);
    }
    return object;
}
