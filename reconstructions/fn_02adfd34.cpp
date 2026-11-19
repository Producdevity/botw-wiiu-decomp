extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029daaa4(void*, const void*);

extern "C" void* fn_02adfd34(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(228, allocator, 4);
    if (object) {
        object = fn_029daaa4(object, descriptor);
    }
    return object;
}
