extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0240f2c0(void*, const void*);

extern "C" void* fn_02ac5988(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(288, allocator, 4);
    if (object) {
        object = fn_0240f2c0(object, descriptor);
    }
    return object;
}
