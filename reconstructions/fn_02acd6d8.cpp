extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025ba5dc(void*, const void*);

extern "C" void* fn_02acd6d8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(52, allocator, 4);
    if (object) {
        object = fn_025ba5dc(object, descriptor);
    }
    return object;
}
