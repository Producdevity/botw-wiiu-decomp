extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02162fc8(void*, const void*);

extern "C" void* fn_02ab1d2c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_02162fc8(object, descriptor);
    }
    return object;
}
