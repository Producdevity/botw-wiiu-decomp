extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026f1e2c(void*, const void*);

extern "C" void* fn_02ad1fe4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(232, allocator, 4);
    if (object) {
        object = fn_026f1e2c(object, descriptor);
    }
    return object;
}
