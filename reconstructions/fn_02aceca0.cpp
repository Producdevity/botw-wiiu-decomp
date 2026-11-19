extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0262799c(void*, const void*);

extern "C" void* fn_02aceca0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(108, allocator, 4);
    if (object) {
        object = fn_0262799c(object, descriptor);
    }
    return object;
}
