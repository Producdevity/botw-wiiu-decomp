extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022ef7f0(void*, const void*);

extern "C" void* fn_02abc044(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(336, allocator, 4);
    if (object) {
        object = fn_022ef7f0(object, descriptor);
    }
    return object;
}
