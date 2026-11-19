extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02864cec(void*, const void*);

extern "C" void* fn_02ad6d74(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(548, allocator, 4);
    if (object) {
        object = fn_02864cec(object, descriptor);
    }
    return object;
}
