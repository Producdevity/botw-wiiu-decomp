extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022d1ae0(void*, const void*);

extern "C" void* fn_02abb84c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(168, allocator, 4);
    if (object) {
        object = fn_022d1ae0(object, descriptor);
    }
    return object;
}
