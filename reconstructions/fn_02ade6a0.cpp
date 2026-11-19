extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029c6b2c(void*, const void*);

extern "C" void* fn_02ade6a0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(96, allocator, 4);
    if (object) {
        object = fn_029c6b2c(object, descriptor);
    }
    return object;
}
