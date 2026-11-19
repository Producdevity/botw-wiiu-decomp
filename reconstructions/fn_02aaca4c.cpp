extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0350b3cc(void*, const void*);

extern "C" void* fn_02aaca4c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_0350b3cc(object, descriptor);
    }
    return object;
}
