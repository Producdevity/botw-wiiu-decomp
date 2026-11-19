extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02863728(void*, const void*);

extern "C" void* fn_02ad6d30(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(488, allocator, 4);
    if (object) {
        object = fn_02863728(object, descriptor);
    }
    return object;
}
