extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0218a694(void*, const void*);

extern "C" void* fn_02ab2e2c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(148, allocator, 4);
    if (object) {
        object = fn_0218a694(object, descriptor);
    }
    return object;
}
