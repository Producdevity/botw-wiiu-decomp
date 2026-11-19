extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023b1d24(void*, const void*);

extern "C" void* fn_02ac3d1c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_023b1d24(object, descriptor);
    }
    return object;
}
