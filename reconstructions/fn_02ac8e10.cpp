extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0350f9e0(void*, const void*);

extern "C" void* fn_02ac8e10(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_0350f9e0(object, descriptor);
    }
    return object;
}
