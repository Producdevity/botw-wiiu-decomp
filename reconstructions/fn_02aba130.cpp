extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0227ddac(void*, const void*);

extern "C" void* fn_02aba130(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(292, allocator, 4);
    if (object) {
        object = fn_0227ddac(object, descriptor);
    }
    return object;
}
