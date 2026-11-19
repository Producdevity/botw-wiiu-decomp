extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02761574(void*, const void*);

extern "C" void* fn_02ad3348(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(108, allocator, 4);
    if (object) {
        object = fn_02761574(object, descriptor);
    }
    return object;
}
