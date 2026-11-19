extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02143f24(void*, const void*);

extern "C" void* fn_02ab0b60(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_02143f24(object, descriptor);
    }
    return object;
}
