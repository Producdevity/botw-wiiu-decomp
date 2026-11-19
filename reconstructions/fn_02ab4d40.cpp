extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021d62a4(void*, const void*);

extern "C" void* fn_02ab4d40(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(80, allocator, 4);
    if (object) {
        object = fn_021d62a4(object, descriptor);
    }
    return object;
}
