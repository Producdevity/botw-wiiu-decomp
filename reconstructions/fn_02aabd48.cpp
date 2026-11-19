extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_03326e08(void*, const void*);

extern "C" void* fn_02aabd48(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_03326e08(object, descriptor);
    }
    return object;
}
