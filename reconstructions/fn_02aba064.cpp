extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0227c7ac(void*, const void*);

extern "C" void* fn_02aba064(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(100, allocator, 4);
    if (object) {
        object = fn_0227c7ac(object, descriptor);
    }
    return object;
}
