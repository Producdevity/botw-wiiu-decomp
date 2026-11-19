extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024f0ea4(void*, const void*);

extern "C" void* fn_02ac9f54(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(464, allocator, 4);
    if (object) {
        object = fn_024f0ea4(object, descriptor);
    }
    return object;
}
