extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0218c928(void*, const void*);

extern "C" void* fn_02ab2eb4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(112, allocator, 4);
    if (object) {
        object = fn_0218c928(object, descriptor);
    }
    return object;
}
