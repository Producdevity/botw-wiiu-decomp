extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023a3264(void*, const void*);

extern "C" void* fn_02ac34e0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_023a3264(object, descriptor);
    }
    return object;
}
