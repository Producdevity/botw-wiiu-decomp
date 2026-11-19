extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0223e9ac(void*, const void*);

extern "C" void* fn_02ab8508(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_0223e9ac(object, descriptor);
    }
    return object;
}
