extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02689f3c(void*, const void*);

extern "C" void* fn_02ad0730(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(172, allocator, 4);
    if (object) {
        object = fn_02689f3c(object, descriptor);
    }
    return object;
}
