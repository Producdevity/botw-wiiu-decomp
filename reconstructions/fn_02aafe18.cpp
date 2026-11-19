extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02bc62cc(void*, const void*);

extern "C" void* fn_02aafe18(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_02bc62cc(object, descriptor);
    }
    return object;
}
