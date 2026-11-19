extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02899b2c(void*, const void*);

extern "C" void* fn_02ad7d64(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_02899b2c(object, descriptor);
    }
    return object;
}
