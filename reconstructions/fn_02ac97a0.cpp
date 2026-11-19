extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024d4cfc(void*, const void*);

extern "C" void* fn_02ac97a0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(72, allocator, 4);
    if (object) {
        object = fn_024d4cfc(object, descriptor);
    }
    return object;
}
