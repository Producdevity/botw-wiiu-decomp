extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022e92cc(void*, const void*);

extern "C" void* fn_02abbde0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_022e92cc(object, descriptor);
    }
    return object;
}
