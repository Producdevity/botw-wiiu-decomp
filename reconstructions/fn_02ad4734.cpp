extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027dd890(void*, const void*);

extern "C" void* fn_02ad4734(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(72, allocator, 4);
    if (object) {
        object = fn_027dd890(object, descriptor);
    }
    return object;
}
