extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02bc66b0(void*, const void*);

extern "C" void* fn_02aafe5c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(176, allocator, 4);
    if (object) {
        object = fn_02bc66b0(object, descriptor);
    }
    return object;
}
