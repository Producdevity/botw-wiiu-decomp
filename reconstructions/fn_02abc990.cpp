extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0230ddfc(void*, const void*);

extern "C" void* fn_02abc990(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(72, allocator, 4);
    if (object) {
        object = fn_0230ddfc(object, descriptor);
    }
    return object;
}
