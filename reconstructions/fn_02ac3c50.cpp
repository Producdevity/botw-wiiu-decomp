extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023ae0a8(void*, const void*);

extern "C" void* fn_02ac3c50(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_023ae0a8(object, descriptor);
    }
    return object;
}
