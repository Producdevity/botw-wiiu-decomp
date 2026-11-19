extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021e9a6c(void*, const void*);

extern "C" void* fn_02ab5604(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(284, allocator, 4);
    if (object) {
        object = fn_021e9a6c(object, descriptor);
    }
    return object;
}
