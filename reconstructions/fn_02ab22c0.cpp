extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0216f0ac(void*, const void*);

extern "C" void* fn_02ab22c0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(152, allocator, 4);
    if (object) {
        object = fn_0216f0ac(object, descriptor);
    }
    return object;
}
