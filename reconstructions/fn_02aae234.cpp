extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020edab8(void*, const void*);

extern "C" void* fn_02aae234(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_020edab8(object, descriptor);
    }
    return object;
}
