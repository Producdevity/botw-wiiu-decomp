extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024cf77c(void*, const void*);

extern "C" void* fn_02ac964c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(80, allocator, 4);
    if (object) {
        object = fn_024cf77c(object, descriptor);
    }
    return object;
}
