extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024e32d4(void*, const void*);

extern "C" void* fn_02ac9a8c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_024e32d4(object, descriptor);
    }
    return object;
}
