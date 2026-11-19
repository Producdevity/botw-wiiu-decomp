extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02d0a120(void*, const void*);

extern "C" void* fn_02ad4f2c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(344, allocator, 4);
    if (object) {
        object = fn_02d0a120(object, descriptor);
    }
    return object;
}
