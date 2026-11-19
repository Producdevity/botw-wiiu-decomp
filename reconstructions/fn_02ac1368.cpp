extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02cea864(void*, const void*);

extern "C" void* fn_02ac1368(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(216, allocator, 4);
    if (object) {
        object = fn_02cea864(object, descriptor);
    }
    return object;
}
