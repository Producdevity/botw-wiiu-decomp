extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0287f5c0(void*, const void*);

extern "C" void* fn_02ad73d4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(88, allocator, 4);
    if (object) {
        object = fn_0287f5c0(object, descriptor);
    }
    return object;
}
