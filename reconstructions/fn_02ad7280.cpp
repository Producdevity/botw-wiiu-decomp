extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02879fc0(void*, const void*);

extern "C" void* fn_02ad7280(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(148, allocator, 4);
    if (object) {
        object = fn_02879fc0(object, descriptor);
    }
    return object;
}
