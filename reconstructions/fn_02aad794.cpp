extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020cd2a4(void*, const void*);

extern "C" void* fn_02aad794(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(92, allocator, 4);
    if (object) {
        object = fn_020cd2a4(object, descriptor);
    }
    return object;
}
