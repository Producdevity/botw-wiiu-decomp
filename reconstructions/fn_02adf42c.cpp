extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029d4a40(void*, const void*);

extern "C" void* fn_02adf42c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_029d4a40(object, descriptor);
    }
    return object;
}
