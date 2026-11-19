extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027ff540(void*, const void*);

extern "C" void* fn_02ad5614(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(364, allocator, 4);
    if (object) {
        object = fn_027ff540(object, descriptor);
    }
    return object;
}
