extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029d04cc(void*, const void*);

extern "C" void* fn_02adeedc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_029d04cc(object, descriptor);
    }
    return object;
}
