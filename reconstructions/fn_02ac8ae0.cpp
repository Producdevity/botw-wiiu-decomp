extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032d9670(void*, const void*);

extern "C" void* fn_02ac8ae0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_032d9670(object, descriptor);
    }
    return object;
}
