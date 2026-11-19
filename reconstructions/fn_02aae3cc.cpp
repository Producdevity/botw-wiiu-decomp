extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020f25b8(void*, const void*);

extern "C" void* fn_02aae3cc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_020f25b8(object, descriptor);
    }
    return object;
}
