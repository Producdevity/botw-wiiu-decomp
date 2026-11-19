extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02c65fb0(void*, const void*);

extern "C" void* fn_02abef04(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_02c65fb0(object, descriptor);
    }
    return object;
}
