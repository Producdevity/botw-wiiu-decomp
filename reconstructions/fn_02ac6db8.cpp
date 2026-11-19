extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0244cdcc(void*, const void*);

extern "C" void* fn_02ac6db8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_0244cdcc(object, descriptor);
    }
    return object;
}
