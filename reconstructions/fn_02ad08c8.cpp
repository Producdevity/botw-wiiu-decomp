extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0268eeb8(void*, const void*);

extern "C" void* fn_02ad08c8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(164, allocator, 4);
    if (object) {
        object = fn_0268eeb8(object, descriptor);
    }
    return object;
}
