extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02874414(void*, const void*);

extern "C" void* fn_02ad70a4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_02874414(object, descriptor);
    }
    return object;
}
