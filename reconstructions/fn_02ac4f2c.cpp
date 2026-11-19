extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023ed650(void*, const void*);

extern "C" void* fn_02ac4f2c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(172, allocator, 4);
    if (object) {
        object = fn_023ed650(object, descriptor);
    }
    return object;
}
