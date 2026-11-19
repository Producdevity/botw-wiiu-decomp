extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0214bdb8(void*, const void*);

extern "C" void* fn_02ab0fe4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(332, allocator, 4);
    if (object) {
        object = fn_0214bdb8(object, descriptor);
    }
    return object;
}
