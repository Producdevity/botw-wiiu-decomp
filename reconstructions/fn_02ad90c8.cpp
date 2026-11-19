extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029028a4(void*, const void*);

extern "C" void* fn_02ad90c8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_029028a4(object, descriptor);
    }
    return object;
}
