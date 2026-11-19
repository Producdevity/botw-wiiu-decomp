extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021d37d8(void*, const void*);

extern "C" void* fn_02ab4ba8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_021d37d8(object, descriptor);
    }
    return object;
}
