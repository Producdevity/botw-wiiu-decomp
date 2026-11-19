extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027e3518(void*, const void*);

extern "C" void* fn_02ad4954(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(124, allocator, 4);
    if (object) {
        object = fn_027e3518(object, descriptor);
    }
    return object;
}
