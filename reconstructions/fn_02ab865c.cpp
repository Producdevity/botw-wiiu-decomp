extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02245fec(void*, const void*);

extern "C" void* fn_02ab865c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(108, allocator, 4);
    if (object) {
        object = fn_02245fec(object, descriptor);
    }
    return object;
}
