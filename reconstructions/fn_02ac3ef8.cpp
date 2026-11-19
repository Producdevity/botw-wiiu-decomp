extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023b5c04(void*, const void*);

extern "C" void* fn_02ac3ef8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_023b5c04(object, descriptor);
    }
    return object;
}
