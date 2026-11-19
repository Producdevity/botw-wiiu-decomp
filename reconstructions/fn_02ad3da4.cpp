extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027a6a3c(void*, const void*);

extern "C" void* fn_02ad3da4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(496, allocator, 4);
    if (object) {
        object = fn_027a6a3c(object, descriptor);
    }
    return object;
}
