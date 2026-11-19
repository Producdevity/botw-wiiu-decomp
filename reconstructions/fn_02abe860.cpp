extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023521b0(void*, const void*);

extern "C" void* fn_02abe860(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_023521b0(object, descriptor);
    }
    return object;
}
