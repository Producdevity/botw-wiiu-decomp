extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0279fe24(void*, const void*);

extern "C" void* fn_02ad3c50(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(428, allocator, 4);
    if (object) {
        object = fn_0279fe24(object, descriptor);
    }
    return object;
}
