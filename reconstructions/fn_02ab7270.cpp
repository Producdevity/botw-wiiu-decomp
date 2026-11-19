extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0221726c(void*, const void*);

extern "C" void* fn_02ab7270(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(100, allocator, 4);
    if (object) {
        object = fn_0221726c(object, descriptor);
    }
    return object;
}
