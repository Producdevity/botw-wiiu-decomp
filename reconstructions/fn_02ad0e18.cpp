extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026ac90c(void*, const void*);

extern "C" void* fn_02ad0e18(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(724, allocator, 4);
    if (object) {
        object = fn_026ac90c(object, descriptor);
    }
    return object;
}
