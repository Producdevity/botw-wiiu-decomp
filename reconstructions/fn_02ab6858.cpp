extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02205cf8(void*, const void*);

extern "C" void* fn_02ab6858(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(92, allocator, 4);
    if (object) {
        object = fn_02205cf8(object, descriptor);
    }
    return object;
}
