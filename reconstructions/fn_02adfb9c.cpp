extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029d98e4(void*, const void*);

extern "C" void* fn_02adfb9c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(64, allocator, 4);
    if (object) {
        object = fn_029d98e4(object, descriptor);
    }
    return object;
}
