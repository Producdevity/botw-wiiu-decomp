extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023679e8(void*, const void*);

extern "C" void* fn_02ab8f64(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(108, allocator, 4);
    if (object) {
        object = fn_023679e8(object, descriptor);
    }
    return object;
}
