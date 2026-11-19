extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02c63a1c(void*, const void*);

extern "C" void* fn_02abed28(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02c63a1c(object, descriptor);
    }
    return object;
}
