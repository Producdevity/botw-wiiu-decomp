extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028be900(void*, const void*);

extern "C" void* fn_02ad855c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(536, allocator, 4);
    if (object) {
        object = fn_028be900(object, descriptor);
    }
    return object;
}
