extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0239aa8c(void*, const void*);

extern "C" void* fn_02ac305c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_0239aa8c(object, descriptor);
    }
    return object;
}
