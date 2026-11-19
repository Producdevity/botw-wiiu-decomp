extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027092e4(void*, const void*);

extern "C" void* fn_02ad2138(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(1588, allocator, 4);
    if (object) {
        object = fn_027092e4(object, descriptor);
    }
    return object;
}
