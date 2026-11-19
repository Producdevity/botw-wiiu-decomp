extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024070ec(void*, const void*);

extern "C" void* fn_02ac56e0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(228, allocator, 4);
    if (object) {
        object = fn_024070ec(object, descriptor);
    }
    return object;
}
