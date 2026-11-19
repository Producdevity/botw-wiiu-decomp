extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0252f8a4(void*, const void*);

extern "C" void* fn_02acae34(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(220, allocator, 4);
    if (object) {
        object = fn_0252f8a4(object, descriptor);
    }
    return object;
}
