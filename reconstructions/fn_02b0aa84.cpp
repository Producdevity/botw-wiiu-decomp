extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a9dccc(void*, const void*);

extern "C" void* fn_02b0aa84(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02a9dccc(object, descriptor);
    }
    return object;
}
