extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0284ecf0(void*, const void*);

extern "C" void* fn_02ad67e0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_0284ecf0(object, descriptor);
    }
    return object;
}
