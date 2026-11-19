extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027b3678(void*, const void*);

extern "C" void* fn_02ad3e2c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_027b3678(object, descriptor);
    }
    return object;
}
