extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0268d398(void*, const void*);

extern "C" void* fn_02ad0840(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_0268d398(object, descriptor);
    }
    return object;
}
