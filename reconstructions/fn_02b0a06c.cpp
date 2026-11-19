extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a87158(void*, const void*);

extern "C" void* fn_02b0a06c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(56, allocator, 4);
    if (object) {
        object = fn_02a87158(object, descriptor);
    }
    return object;
}
