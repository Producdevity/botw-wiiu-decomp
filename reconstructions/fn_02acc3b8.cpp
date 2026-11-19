extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027f04ec(void*, const void*);

extern "C" void* fn_02acc3b8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(608, allocator, 4);
    if (object) {
        object = fn_027f04ec(object, descriptor);
    }
    return object;
}
