extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02536230(void*, const void*);

extern "C" void* fn_02acb1ec(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(1448, allocator, 4);
    if (object) {
        object = fn_02536230(object, descriptor);
    }
    return object;
}
