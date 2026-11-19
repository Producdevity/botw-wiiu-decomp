extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0216a180(void*, const void*);

extern "C" void* fn_02ab20e4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(2316, allocator, 4);
    if (object) {
        object = fn_0216a180(object, descriptor);
    }
    return object;
}
