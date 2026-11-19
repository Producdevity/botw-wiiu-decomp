extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0265b4f8(void*, const void*);

extern "C" void* fn_02acfc4c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(676, allocator, 4);
    if (object) {
        object = fn_0265b4f8(object, descriptor);
    }
    return object;
}
