extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02748e58(void*, const void*);

extern "C" void* fn_02ad2d2c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(120, allocator, 4);
    if (object) {
        object = fn_02748e58(object, descriptor);
    }
    return object;
}
