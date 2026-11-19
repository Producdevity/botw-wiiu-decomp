extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0289b4ac(void*, const void*);

extern "C" void* fn_02ad7dec(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(56, allocator, 4);
    if (object) {
        object = fn_0289b4ac(object, descriptor);
    }
    return object;
}
