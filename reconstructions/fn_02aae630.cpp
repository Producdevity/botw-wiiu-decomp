extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020fac5c(void*, const void*);

extern "C" void* fn_02aae630(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(212, allocator, 4);
    if (object) {
        object = fn_020fac5c(object, descriptor);
    }
    return object;
}
