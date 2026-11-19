extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0239ba14(void*, const void*);

extern "C" void* fn_02ac30a0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(112, allocator, 4);
    if (object) {
        object = fn_0239ba14(object, descriptor);
    }
    return object;
}
