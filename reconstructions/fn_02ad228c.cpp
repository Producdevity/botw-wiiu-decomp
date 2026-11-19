extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0271668c(void*, const void*);

extern "C" void* fn_02ad228c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_0271668c(object, descriptor);
    }
    return object;
}
