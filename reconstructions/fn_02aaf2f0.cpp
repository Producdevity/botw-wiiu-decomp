extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021216a4(void*, const void*);

extern "C" void* fn_02aaf2f0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(140, allocator, 4);
    if (object) {
        object = fn_021216a4(object, descriptor);
    }
    return object;
}
