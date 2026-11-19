extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027d16a8(void*, const void*);

extern "C" void* fn_02ad415c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(180, allocator, 4);
    if (object) {
        object = fn_027d16a8(object, descriptor);
    }
    return object;
}
