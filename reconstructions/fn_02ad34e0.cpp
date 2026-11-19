extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02765c84(void*, const void*);

extern "C" void* fn_02ad34e0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(688, allocator, 4);
    if (object) {
        object = fn_02765c84(object, descriptor);
    }
    return object;
}
