extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029d62e4(void*, const void*);

extern "C" void* fn_02adf718(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(72, allocator, 4);
    if (object) {
        object = fn_029d62e4(object, descriptor);
    }
    return object;
}
