extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02304bc0(void*, const void*);

extern "C" void* fn_02abd8f8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(116, allocator, 4);
    if (object) {
        object = fn_02304bc0(object, descriptor);
    }
    return object;
}
