extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032b54e0(void*, const void*);

extern "C" void* fn_02aab550(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_032b54e0(object, descriptor);
    }
    return object;
}
