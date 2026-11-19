extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02334b30(void*, const void*);

extern "C" void* fn_02abd6d8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(64, allocator, 4);
    if (object) {
        object = fn_02334b30(object, descriptor);
    }
    return object;
}
