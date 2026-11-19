extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0267e05c(void*, const void*);

extern "C" void* fn_02ad0444(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(264, allocator, 4);
    if (object) {
        object = fn_0267e05c(object, descriptor);
    }
    return object;
}
