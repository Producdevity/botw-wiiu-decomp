extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023d2604(void*, const void*);

extern "C" void* fn_02ac4734(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(144, allocator, 4);
    if (object) {
        object = fn_023d2604(object, descriptor);
    }
    return object;
}
