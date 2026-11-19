extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023f533c(void*, const void*);

extern "C" void* fn_02ac50c4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(160, allocator, 4);
    if (object) {
        object = fn_023f533c(object, descriptor);
    }
    return object;
}
