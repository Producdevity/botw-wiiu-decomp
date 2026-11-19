extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_03159694(void*, const void*);

extern "C" void* fn_02ac876c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_03159694(object, descriptor);
    }
    return object;
}
