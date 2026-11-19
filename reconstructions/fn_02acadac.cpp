extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0252bd7c(void*, const void*);

extern "C" void* fn_02acadac(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(88, allocator, 4);
    if (object) {
        object = fn_0252bd7c(object, descriptor);
    }
    return object;
}
