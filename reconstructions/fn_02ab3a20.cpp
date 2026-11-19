extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021a8d1c(void*, const void*);

extern "C" void* fn_02ab3a20(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_021a8d1c(object, descriptor);
    }
    return object;
}
