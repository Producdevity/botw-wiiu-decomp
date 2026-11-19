extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020c3ca4(void*, const void*);

extern "C" void* fn_02aad420(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(108, allocator, 4);
    if (object) {
        object = fn_020c3ca4(object, descriptor);
    }
    return object;
}
