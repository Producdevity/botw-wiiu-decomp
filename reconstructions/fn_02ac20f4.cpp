extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02371c64(void*, const void*);

extern "C" void* fn_02ac20f4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(84, allocator, 4);
    if (object) {
        object = fn_02371c64(object, descriptor);
    }
    return object;
}
