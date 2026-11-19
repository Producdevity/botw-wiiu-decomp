extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02900a2c(void*, const void*);

extern "C" void* fn_02ad8ffc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(112, allocator, 4);
    if (object) {
        object = fn_02900a2c(object, descriptor);
    }
    return object;
}
