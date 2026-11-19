extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032b19d4(void*, const void*);

extern "C" void* fn_02aab374(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_032b19d4(object, descriptor);
    }
    return object;
}
