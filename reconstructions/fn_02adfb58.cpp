extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029d9674(void*, const void*);

extern "C" void* fn_02adfb58(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_029d9674(object, descriptor);
    }
    return object;
}
