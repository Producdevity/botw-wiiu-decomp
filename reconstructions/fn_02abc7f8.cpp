extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02301740(void*, const void*);

extern "C" void* fn_02abc7f8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02301740(object, descriptor);
    }
    return object;
}
