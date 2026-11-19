extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020f7694(void*, const void*);

extern "C" void* fn_02aae5a8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(140, allocator, 4);
    if (object) {
        object = fn_020f7694(object, descriptor);
    }
    return object;
}
