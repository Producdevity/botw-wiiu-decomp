extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027843b0(void*, const void*);

extern "C" void* fn_02ad4228(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(644, allocator, 4);
    if (object) {
        object = fn_027843b0(object, descriptor);
    }
    return object;
}
