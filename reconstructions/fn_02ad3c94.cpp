extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027a0a0c(void*, const void*);

extern "C" void* fn_02ad3c94(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(416, allocator, 4);
    if (object) {
        object = fn_027a0a0c(object, descriptor);
    }
    return object;
}
