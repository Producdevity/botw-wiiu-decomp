extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0227c1b4(void*, const void*);

extern "C" void* fn_02aba020(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(140, allocator, 4);
    if (object) {
        object = fn_0227c1b4(object, descriptor);
    }
    return object;
}
