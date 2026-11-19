extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0207dee4(void*, const void*);

extern "C" void* fn_02ab7c00(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_0207dee4(object, descriptor);
    }
    return object;
}
