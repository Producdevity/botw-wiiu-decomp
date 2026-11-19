extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029cb11c(void*, const void*);

extern "C" void* fn_02adea9c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(56, allocator, 4);
    if (object) {
        object = fn_029cb11c(object, descriptor);
    }
    return object;
}
