extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029c0c10(void*, const void*);

extern "C" void* fn_02ade1d8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_029c0c10(object, descriptor);
    }
    return object;
}
