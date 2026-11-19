extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032b8f14(void*, const void*);

extern "C" void* fn_02aab6e8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_032b8f14(object, descriptor);
    }
    return object;
}
