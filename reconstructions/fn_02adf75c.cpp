extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029d6768(void*, const void*);

extern "C" void* fn_02adf75c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(56, allocator, 4);
    if (object) {
        object = fn_029d6768(object, descriptor);
    }
    return object;
}
