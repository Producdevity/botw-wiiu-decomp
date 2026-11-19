extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020d1040(void*, const void*);

extern "C" void* fn_02aad9b4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(104, allocator, 4);
    if (object) {
        object = fn_020d1040(object, descriptor);
    }
    return object;
}
