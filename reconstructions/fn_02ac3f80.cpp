extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023b7c38(void*, const void*);

extern "C" void* fn_02ac3f80(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(132, allocator, 4);
    if (object) {
        object = fn_023b7c38(object, descriptor);
    }
    return object;
}
