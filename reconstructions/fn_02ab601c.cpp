extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021e8e8c(void*, const void*);

extern "C" void* fn_02ab601c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_021e8e8c(object, descriptor);
    }
    return object;
}
