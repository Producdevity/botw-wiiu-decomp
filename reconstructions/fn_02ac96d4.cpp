extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024d1210(void*, const void*);

extern "C" void* fn_02ac96d4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(216, allocator, 4);
    if (object) {
        object = fn_024d1210(object, descriptor);
    }
    return object;
}
