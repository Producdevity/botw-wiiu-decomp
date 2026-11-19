extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02389068(void*, const void*);

extern "C" void* fn_02ac2930(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(92, allocator, 4);
    if (object) {
        object = fn_02389068(object, descriptor);
    }
    return object;
}
