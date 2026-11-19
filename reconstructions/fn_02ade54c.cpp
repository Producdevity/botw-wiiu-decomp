extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029c5224(void*, const void*);

extern "C" void* fn_02ade54c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(84, allocator, 4);
    if (object) {
        object = fn_029c5224(object, descriptor);
    }
    return object;
}
