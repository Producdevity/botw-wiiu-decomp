extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027a4720(void*, const void*);

extern "C" void* fn_02ad3d1c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(184, allocator, 4);
    if (object) {
        object = fn_027a4720(object, descriptor);
    }
    return object;
}
