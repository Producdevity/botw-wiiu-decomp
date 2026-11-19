extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025ffae0(void*, const void*);

extern "C" void* fn_02ace288(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(228, allocator, 4);
    if (object) {
        object = fn_025ffae0(object, descriptor);
    }
    return object;
}
