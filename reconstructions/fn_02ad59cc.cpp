extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028124ac(void*, const void*);

extern "C" void* fn_02ad59cc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(120, allocator, 4);
    if (object) {
        object = fn_028124ac(object, descriptor);
    }
    return object;
}
