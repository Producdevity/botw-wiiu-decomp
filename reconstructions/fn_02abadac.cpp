extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020805c0(void*, const void*);

extern "C" void* fn_02abadac(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_020805c0(object, descriptor);
    }
    return object;
}
