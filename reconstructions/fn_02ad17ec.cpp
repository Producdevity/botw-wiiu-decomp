extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026d2b08(void*, const void*);

extern "C" void* fn_02ad17ec(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(180, allocator, 4);
    if (object) {
        object = fn_026d2b08(object, descriptor);
    }
    return object;
}
