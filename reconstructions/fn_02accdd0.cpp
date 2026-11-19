extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0258d6ec(void*, const void*);

extern "C" void* fn_02accdd0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(132, allocator, 4);
    if (object) {
        object = fn_0258d6ec(object, descriptor);
    }
    return object;
}
