extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027c77e4(void*, const void*);

extern "C" void* fn_02ad3fc4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_027c77e4(object, descriptor);
    }
    return object;
}
