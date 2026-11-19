extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02755c0c(void*, const void*);

extern "C" void* fn_02ad2f90(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_02755c0c(object, descriptor);
    }
    return object;
}
