extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0219a9f0(void*, const void*);

extern "C" void* fn_02ab3338(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(192, allocator, 4);
    if (object) {
        object = fn_0219a9f0(object, descriptor);
    }
    return object;
}
