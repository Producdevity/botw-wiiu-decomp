extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0291887c(void*, const void*);

extern "C" void* fn_02aca2c8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_0291887c(object, descriptor);
    }
    return object;
}
