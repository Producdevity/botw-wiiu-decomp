extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02187750(void*, const void*);

extern "C" void* fn_02ab2c94(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(204, allocator, 4);
    if (object) {
        object = fn_02187750(object, descriptor);
    }
    return object;
}
