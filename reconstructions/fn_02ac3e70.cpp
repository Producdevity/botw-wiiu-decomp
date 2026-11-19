extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023b4e80(void*, const void*);

extern "C" void* fn_02ac3e70(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_023b4e80(object, descriptor);
    }
    return object;
}
