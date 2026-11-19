extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021d0a38(void*, const void*);

extern "C" void* fn_02ab2854(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_021d0a38(object, descriptor);
    }
    return object;
}
