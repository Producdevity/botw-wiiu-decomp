extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021e670c(void*, const void*);

extern "C" void* fn_02ab5f0c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(64, allocator, 4);
    if (object) {
        object = fn_021e670c(object, descriptor);
    }
    return object;
}
