extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0244a71c(void*, const void*);

extern "C" void* fn_02ac6b54(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(184, allocator, 4);
    if (object) {
        object = fn_0244a71c(object, descriptor);
    }
    return object;
}
