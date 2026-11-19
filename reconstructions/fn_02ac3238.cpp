extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0239eb94(void*, const void*);

extern "C" void* fn_02ac3238(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_0239eb94(object, descriptor);
    }
    return object;
}
