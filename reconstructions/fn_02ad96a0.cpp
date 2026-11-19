extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02913bdc(void*, const void*);

extern "C" void* fn_02ad96a0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_02913bdc(object, descriptor);
    }
    return object;
}
