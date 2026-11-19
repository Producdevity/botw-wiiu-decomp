extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0281cfd8(void*, const void*);

extern "C" void* fn_02ad5bec(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_0281cfd8(object, descriptor);
    }
    return object;
}
