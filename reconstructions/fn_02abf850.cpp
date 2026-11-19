extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02c8b14c(void*, const void*);

extern "C" void* fn_02abf850(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_02c8b14c(object, descriptor);
    }
    return object;
}
