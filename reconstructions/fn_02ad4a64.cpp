extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027e656c(void*, const void*);

extern "C" void* fn_02ad4a64(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_027e656c(object, descriptor);
    }
    return object;
}
