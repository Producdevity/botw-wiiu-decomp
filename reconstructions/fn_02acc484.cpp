extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0256a46c(void*, const void*);

extern "C" void* fn_02acc484(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_0256a46c(object, descriptor);
    }
    return object;
}
