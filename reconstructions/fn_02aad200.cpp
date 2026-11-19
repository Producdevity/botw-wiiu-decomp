extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020c0ff0(void*, const void*);

extern "C" void* fn_02aad200(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_020c0ff0(object, descriptor);
    }
    return object;
}
