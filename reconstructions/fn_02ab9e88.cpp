extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0227a720(void*, const void*);

extern "C" void* fn_02ab9e88(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(272, allocator, 4);
    if (object) {
        object = fn_0227a720(object, descriptor);
    }
    return object;
}
