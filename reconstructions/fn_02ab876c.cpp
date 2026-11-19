extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0224a1a4(void*, const void*);

extern "C" void* fn_02ab876c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(92, allocator, 4);
    if (object) {
        object = fn_0224a1a4(object, descriptor);
    }
    return object;
}
