extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024e91d8(void*, const void*);

extern "C" void* fn_02ac9d34(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(108, allocator, 4);
    if (object) {
        object = fn_024e91d8(object, descriptor);
    }
    return object;
}
