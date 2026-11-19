extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024bf05c(void*, const void*);

extern "C" void* fn_02ac8f64(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(92, allocator, 4);
    if (object) {
        object = fn_024bf05c(object, descriptor);
    }
    return object;
}
