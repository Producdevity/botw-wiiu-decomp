extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027eba38(void*, const void*);

extern "C" void* fn_02ad52a0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_027eba38(object, descriptor);
    }
    return object;
}
