extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02c8cc68(void*, const void*);

extern "C" void* fn_02abeec0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_02c8cc68(object, descriptor);
    }
    return object;
}
