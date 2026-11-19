extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021c4cac(void*, const void*);

extern "C" void* fn_02ab4614(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_021c4cac(object, descriptor);
    }
    return object;
}
