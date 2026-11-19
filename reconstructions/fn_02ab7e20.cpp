extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0222b600(void*, const void*);

extern "C" void* fn_02ab7e20(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(168, allocator, 4);
    if (object) {
        object = fn_0222b600(object, descriptor);
    }
    return object;
}
