extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0332cb98(void*, const void*);

extern "C" void* fn_02adc9f0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(216, allocator, 4);
    if (object) {
        object = fn_0332cb98(object, descriptor);
    }
    return object;
}
