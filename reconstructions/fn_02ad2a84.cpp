extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027403d0(void*, const void*);

extern "C" void* fn_02ad2a84(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(88, allocator, 4);
    if (object) {
        object = fn_027403d0(object, descriptor);
    }
    return object;
}
