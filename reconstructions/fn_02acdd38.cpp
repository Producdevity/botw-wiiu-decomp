extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025e461c(void*, const void*);

extern "C" void* fn_02acdd38(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(80, allocator, 4);
    if (object) {
        object = fn_025e461c(object, descriptor);
    }
    return object;
}
