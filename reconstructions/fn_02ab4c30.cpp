extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021d41b8(void*, const void*);

extern "C" void* fn_02ab4c30(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_021d41b8(object, descriptor);
    }
    return object;
}
