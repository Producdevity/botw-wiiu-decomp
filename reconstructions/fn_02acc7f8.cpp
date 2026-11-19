extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027fac3c(void*, const void*);

extern "C" void* fn_02acc7f8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(332, allocator, 4);
    if (object) {
        object = fn_027fac3c(object, descriptor);
    }
    return object;
}
