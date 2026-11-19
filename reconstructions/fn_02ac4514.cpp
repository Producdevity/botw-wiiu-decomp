extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023cadc8(void*, const void*);

extern "C" void* fn_02ac4514(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(1832, allocator, 4);
    if (object) {
        object = fn_023cadc8(object, descriptor);
    }
    return object;
}
