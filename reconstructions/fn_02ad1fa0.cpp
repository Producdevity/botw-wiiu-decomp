extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026f01d8(void*, const void*);

extern "C" void* fn_02ad1fa0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(252, allocator, 4);
    if (object) {
        object = fn_026f01d8(object, descriptor);
    }
    return object;
}
