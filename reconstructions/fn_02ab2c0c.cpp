extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02184aa4(void*, const void*);

extern "C" void* fn_02ab2c0c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(180, allocator, 4);
    if (object) {
        object = fn_02184aa4(object, descriptor);
    }
    return object;
}
