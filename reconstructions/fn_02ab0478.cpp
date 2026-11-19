extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02131e2c(void*, const void*);

extern "C" void* fn_02ab0478(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(88, allocator, 4);
    if (object) {
        object = fn_02131e2c(object, descriptor);
    }
    return object;
}
