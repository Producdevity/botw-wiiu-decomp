extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023e07ec(void*, const void*);

extern "C" void* fn_02ac4aec(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(144, allocator, 4);
    if (object) {
        object = fn_023e07ec(object, descriptor);
    }
    return object;
}
