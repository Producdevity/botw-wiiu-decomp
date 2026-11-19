extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02087c5c(void*, const void*);

extern "C" void* fn_02abddc0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_02087c5c(object, descriptor);
    }
    return object;
}
