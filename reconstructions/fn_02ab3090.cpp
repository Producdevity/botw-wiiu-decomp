extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021912c8(void*, const void*);

extern "C" void* fn_02ab3090(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(108, allocator, 4);
    if (object) {
        object = fn_021912c8(object, descriptor);
    }
    return object;
}
