extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021eb45c(void*, const void*);

extern "C" void* fn_02ab56d0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(56, allocator, 4);
    if (object) {
        object = fn_021eb45c(object, descriptor);
    }
    return object;
}
