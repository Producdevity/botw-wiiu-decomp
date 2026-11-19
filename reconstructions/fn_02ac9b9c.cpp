extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024e5724(void*, const void*);

extern "C" void* fn_02ac9b9c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_024e5724(object, descriptor);
    }
    return object;
}
