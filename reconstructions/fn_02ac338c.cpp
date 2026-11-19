extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023a1bec(void*, const void*);

extern "C" void* fn_02ac338c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_023a1bec(object, descriptor);
    }
    return object;
}
