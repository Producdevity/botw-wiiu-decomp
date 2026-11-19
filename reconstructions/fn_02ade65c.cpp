extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029c6950(void*, const void*);

extern "C" void* fn_02ade65c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_029c6950(object, descriptor);
    }
    return object;
}
