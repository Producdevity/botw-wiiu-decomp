extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0350ac78(void*, const void*);

extern "C" void* fn_02aaca08(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_0350ac78(object, descriptor);
    }
    return object;
}
