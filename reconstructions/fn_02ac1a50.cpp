extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0236233c(void*, const void*);

extern "C" void* fn_02ac1a50(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(212, allocator, 4);
    if (object) {
        object = fn_0236233c(object, descriptor);
    }
    return object;
}
