extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026dd704(void*, const void*);

extern "C" void* fn_02ad1a0c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_026dd704(object, descriptor);
    }
    return object;
}
