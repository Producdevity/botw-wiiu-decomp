extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0218bd00(void*, const void*);

extern "C" void* fn_02ab2e70(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(96, allocator, 4);
    if (object) {
        object = fn_0218bd00(object, descriptor);
    }
    return object;
}
