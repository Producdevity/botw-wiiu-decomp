extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026e6ea4(void*, const void*);

extern "C" void* fn_02ad1d80(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(472, allocator, 4);
    if (object) {
        object = fn_026e6ea4(object, descriptor);
    }
    return object;
}
