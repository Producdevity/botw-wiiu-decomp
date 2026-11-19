extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0266f8bc(void*, const void*);

extern "C" void* fn_02ad0048(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(112, allocator, 4);
    if (object) {
        object = fn_0266f8bc(object, descriptor);
    }
    return object;
}
