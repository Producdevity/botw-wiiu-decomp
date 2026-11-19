extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022dd7cc(void*, const void*);

extern "C" void* fn_02abb9e4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(176, allocator, 4);
    if (object) {
        object = fn_022dd7cc(object, descriptor);
    }
    return object;
}
