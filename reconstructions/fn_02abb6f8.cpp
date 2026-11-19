extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022ccd54(void*, const void*);

extern "C" void* fn_02abb6f8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(120, allocator, 4);
    if (object) {
        object = fn_022ccd54(object, descriptor);
    }
    return object;
}
