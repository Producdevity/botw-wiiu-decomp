extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032dc3a8(void*, const void*);

extern "C" void* fn_02ac8b68(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_032dc3a8(object, descriptor);
    }
    return object;
}
