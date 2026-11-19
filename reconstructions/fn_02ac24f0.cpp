extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02380ccc(void*, const void*);

extern "C" void* fn_02ac24f0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(136, allocator, 4);
    if (object) {
        object = fn_02380ccc(object, descriptor);
    }
    return object;
}
