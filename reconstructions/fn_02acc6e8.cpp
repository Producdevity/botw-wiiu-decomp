extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0257719c(void*, const void*);

extern "C" void* fn_02acc6e8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(124, allocator, 4);
    if (object) {
        object = fn_0257719c(object, descriptor);
    }
    return object;
}
