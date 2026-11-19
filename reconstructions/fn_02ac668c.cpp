extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0243abd8(void*, const void*);

extern "C" void* fn_02ac668c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(232, allocator, 4);
    if (object) {
        object = fn_0243abd8(object, descriptor);
    }
    return object;
}
