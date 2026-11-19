extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023d44cc(void*, const void*);

extern "C" void* fn_02ac46f0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(140, allocator, 4);
    if (object) {
        object = fn_023d44cc(object, descriptor);
    }
    return object;
}
