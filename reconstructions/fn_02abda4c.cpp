extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02305b60(void*, const void*);

extern "C" void* fn_02abda4c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(116, allocator, 4);
    if (object) {
        object = fn_02305b60(object, descriptor);
    }
    return object;
}
