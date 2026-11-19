extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020cf174(void*, const void*);

extern "C" void* fn_02aad8a4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_020cf174(object, descriptor);
    }
    return object;
}
