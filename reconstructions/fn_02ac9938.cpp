extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024dd77c(void*, const void*);

extern "C" void* fn_02ac9938(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(72, allocator, 4);
    if (object) {
        object = fn_024dd77c(object, descriptor);
    }
    return object;
}
