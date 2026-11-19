extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026c811c(void*, const void*);

extern "C" void* fn_02ad1434(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(156, allocator, 4);
    if (object) {
        object = fn_026c811c(object, descriptor);
    }
    return object;
}
