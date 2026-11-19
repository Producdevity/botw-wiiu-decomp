extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021468f4(void*, const void*);

extern "C" void* fn_02ab0cf8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_021468f4(object, descriptor);
    }
    return object;
}
