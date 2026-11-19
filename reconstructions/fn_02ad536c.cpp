extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027ecd60(void*, const void*);

extern "C" void* fn_02ad536c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_027ecd60(object, descriptor);
    }
    return object;
}
