extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0259cdcc(void*, const void*);

extern "C" void* fn_02acd034(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_0259cdcc(object, descriptor);
    }
    return object;
}
