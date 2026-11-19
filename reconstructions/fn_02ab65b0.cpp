extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021fef3c(void*, const void*);

extern "C" void* fn_02ab65b0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(100, allocator, 4);
    if (object) {
        object = fn_021fef3c(object, descriptor);
    }
    return object;
}
