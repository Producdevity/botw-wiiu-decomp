extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02d006ec(void*, const void*);

extern "C" void* fn_02ad4c40(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_02d006ec(object, descriptor);
    }
    return object;
}
