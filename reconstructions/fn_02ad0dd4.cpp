extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026ab644(void*, const void*);

extern "C" void* fn_02ad0dd4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(80, allocator, 4);
    if (object) {
        object = fn_026ab644(object, descriptor);
    }
    return object;
}
