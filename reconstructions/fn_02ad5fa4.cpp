extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0282dd84(void*, const void*);

extern "C" void* fn_02ad5fa4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(244, allocator, 4);
    if (object) {
        object = fn_0282dd84(object, descriptor);
    }
    return object;
}
