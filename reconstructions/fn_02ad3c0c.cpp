extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0279a3dc(void*, const void*);

extern "C" void* fn_02ad3c0c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(352, allocator, 4);
    if (object) {
        object = fn_0279a3dc(object, descriptor);
    }
    return object;
}
