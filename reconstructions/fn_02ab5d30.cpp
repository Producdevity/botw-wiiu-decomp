extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021e4e28(void*, const void*);

extern "C" void* fn_02ab5d30(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(96, allocator, 4);
    if (object) {
        object = fn_021e4e28(object, descriptor);
    }
    return object;
}
