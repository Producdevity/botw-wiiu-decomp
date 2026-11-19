extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0213cba4(void*, const void*);

extern "C" void* fn_02ab08b8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_0213cba4(object, descriptor);
    }
    return object;
}
