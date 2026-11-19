extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0239a418(void*, const void*);

extern "C" void* fn_02ac3018(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_0239a418(object, descriptor);
    }
    return object;
}
