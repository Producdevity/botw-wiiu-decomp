extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02316fb0(void*, const void*);

extern "C" void* fn_02abce58(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02316fb0(object, descriptor);
    }
    return object;
}
