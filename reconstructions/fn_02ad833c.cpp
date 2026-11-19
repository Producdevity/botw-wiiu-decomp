extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028af910(void*, const void*);

extern "C" void* fn_02ad833c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(184, allocator, 4);
    if (object) {
        object = fn_028af910(object, descriptor);
    }
    return object;
}
