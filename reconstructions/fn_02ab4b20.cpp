extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021d2360(void*, const void*);

extern "C" void* fn_02ab4b20(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_021d2360(object, descriptor);
    }
    return object;
}
