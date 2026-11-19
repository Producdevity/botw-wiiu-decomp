extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02308238(void*, const void*);

extern "C" void* fn_02abdba0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(116, allocator, 4);
    if (object) {
        object = fn_02308238(object, descriptor);
    }
    return object;
}
