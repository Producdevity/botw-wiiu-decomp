extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022fbaa8(void*, const void*);

extern "C" void* fn_02abc50c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(96, allocator, 4);
    if (object) {
        object = fn_022fbaa8(object, descriptor);
    }
    return object;
}
