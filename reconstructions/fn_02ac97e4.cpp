extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024d5fd0(void*, const void*);

extern "C" void* fn_02ac97e4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_024d5fd0(object, descriptor);
    }
    return object;
}
