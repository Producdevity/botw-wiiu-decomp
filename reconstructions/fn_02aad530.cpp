extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020c5a34(void*, const void*);

extern "C" void* fn_02aad530(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(64, allocator, 4);
    if (object) {
        object = fn_020c5a34(object, descriptor);
    }
    return object;
}
