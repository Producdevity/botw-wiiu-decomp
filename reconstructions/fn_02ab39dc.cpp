extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021a8550(void*, const void*);

extern "C" void* fn_02ab39dc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_021a8550(object, descriptor);
    }
    return object;
}
