extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02337aa4(void*, const void*);

extern "C" void* fn_02abd71c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(72, allocator, 4);
    if (object) {
        object = fn_02337aa4(object, descriptor);
    }
    return object;
}
