extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026c8cb4(void*, const void*);

extern "C" void* fn_02ad1478(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(112, allocator, 4);
    if (object) {
        object = fn_026c8cb4(object, descriptor);
    }
    return object;
}
