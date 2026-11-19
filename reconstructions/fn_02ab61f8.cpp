extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021f8c5c(void*, const void*);

extern "C" void* fn_02ab61f8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_021f8c5c(object, descriptor);
    }
    return object;
}
