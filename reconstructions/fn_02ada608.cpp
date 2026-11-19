extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029359bc(void*, const void*);

extern "C" void* fn_02ada608(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(72, allocator, 4);
    if (object) {
        object = fn_029359bc(object, descriptor);
    }
    return object;
}
