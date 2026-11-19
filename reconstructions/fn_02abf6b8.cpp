extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02c85cb4(void*, const void*);

extern "C" void* fn_02abf6b8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_02c85cb4(object, descriptor);
    }
    return object;
}
