extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02214da8(void*, const void*);

extern "C" void* fn_02ab711c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_02214da8(object, descriptor);
    }
    return object;
}
