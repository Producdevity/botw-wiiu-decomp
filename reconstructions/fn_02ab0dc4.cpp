extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021477a8(void*, const void*);

extern "C" void* fn_02ab0dc4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_021477a8(object, descriptor);
    }
    return object;
}
