extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02393e3c(void*, const void*);

extern "C" void* fn_02ac2df8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(56, allocator, 4);
    if (object) {
        object = fn_02393e3c(object, descriptor);
    }
    return object;
}
