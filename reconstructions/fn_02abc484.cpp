extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022faf60(void*, const void*);

extern "C" void* fn_02abc484(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_022faf60(object, descriptor);
    }
    return object;
}
