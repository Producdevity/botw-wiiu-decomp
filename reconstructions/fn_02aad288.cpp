extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020cbadc(void*, const void*);

extern "C" void* fn_02aad288(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_020cbadc(object, descriptor);
    }
    return object;
}
