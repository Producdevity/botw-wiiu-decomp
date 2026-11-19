extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0256f798(void*, const void*);

extern "C" void* fn_02acc61c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(556, allocator, 4);
    if (object) {
        object = fn_0256f798(object, descriptor);
    }
    return object;
}
