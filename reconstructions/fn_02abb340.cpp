extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022c5a6c(void*, const void*);

extern "C" void* fn_02abb340(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_022c5a6c(object, descriptor);
    }
    return object;
}
