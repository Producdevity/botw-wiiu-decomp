extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0258db9c(void*, const void*);

extern "C" void* fn_02acce14(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(80, allocator, 4);
    if (object) {
        object = fn_0258db9c(object, descriptor);
    }
    return object;
}
