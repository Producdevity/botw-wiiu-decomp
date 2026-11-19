extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02238ccc(void*, const void*);

extern "C" void* fn_02ab82e8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(264, allocator, 4);
    if (object) {
        object = fn_02238ccc(object, descriptor);
    }
    return object;
}
