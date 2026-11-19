extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024e2cf0(void*, const void*);

extern "C" void* fn_02ac9a48(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(80, allocator, 4);
    if (object) {
        object = fn_024e2cf0(object, descriptor);
    }
    return object;
}
