extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032ce998(void*, const void*);

extern "C" void* fn_02aabb28(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(4680, allocator, 4);
    if (object) {
        object = fn_032ce998(object, descriptor);
    }
    return object;
}
