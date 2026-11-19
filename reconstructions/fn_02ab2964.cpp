extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0217ce0c(void*, const void*);

extern "C" void* fn_02ab2964(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(64, allocator, 4);
    if (object) {
        object = fn_0217ce0c(object, descriptor);
    }
    return object;
}
