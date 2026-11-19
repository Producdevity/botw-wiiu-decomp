extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022a1bec(void*, const void*);

extern "C" void* fn_02abaa7c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_022a1bec(object, descriptor);
    }
    return object;
}
