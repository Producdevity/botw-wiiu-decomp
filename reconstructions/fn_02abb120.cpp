extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022ba980(void*, const void*);

extern "C" void* fn_02abb120(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(104, allocator, 4);
    if (object) {
        object = fn_022ba980(object, descriptor);
    }
    return object;
}
