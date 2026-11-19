extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020ddf34(void*, const void*);

extern "C" void* fn_02aadf48(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_020ddf34(object, descriptor);
    }
    return object;
}
