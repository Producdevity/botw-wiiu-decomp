extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02c60948(void*, const void*);

extern "C" void* fn_02abec5c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02c60948(object, descriptor);
    }
    return object;
}
