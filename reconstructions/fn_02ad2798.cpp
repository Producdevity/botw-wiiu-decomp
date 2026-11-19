extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027306cc(void*, const void*);

extern "C" void* fn_02ad2798(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_027306cc(object, descriptor);
    }
    return object;
}
