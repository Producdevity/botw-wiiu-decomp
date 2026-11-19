extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027e119c(void*, const void*);

extern "C" void* fn_02ad47bc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_027e119c(object, descriptor);
    }
    return object;
}
