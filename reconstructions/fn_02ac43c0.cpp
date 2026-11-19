extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023c4520(void*, const void*);

extern "C" void* fn_02ac43c0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(276, allocator, 4);
    if (object) {
        object = fn_023c4520(object, descriptor);
    }
    return object;
}
