extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0217c510(void*, const void*);

extern "C" void* fn_02ab2920(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_0217c510(object, descriptor);
    }
    return object;
}
