extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0242052c(void*, const void*);

extern "C" void* fn_02ac5f1c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(72, allocator, 4);
    if (object) {
        object = fn_0242052c(object, descriptor);
    }
    return object;
}
