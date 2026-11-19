extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020902cc(void*, const void*);

extern "C" void* fn_02ac1cf8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(164, allocator, 4);
    if (object) {
        object = fn_020902cc(object, descriptor);
    }
    return object;
}
