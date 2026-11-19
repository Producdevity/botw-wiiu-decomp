extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027140d4(void*, const void*);

extern "C" void* fn_02ad21c0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(72, allocator, 4);
    if (object) {
        object = fn_027140d4(object, descriptor);
    }
    return object;
}
