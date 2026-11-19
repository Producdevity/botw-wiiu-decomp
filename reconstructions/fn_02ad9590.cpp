extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02910870(void*, const void*);

extern "C" void* fn_02ad9590(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(680, allocator, 4);
    if (object) {
        object = fn_02910870(object, descriptor);
    }
    return object;
}
