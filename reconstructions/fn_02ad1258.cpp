extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026c532c(void*, const void*);

extern "C" void* fn_02ad1258(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(188, allocator, 4);
    if (object) {
        object = fn_026c532c(object, descriptor);
    }
    return object;
}
