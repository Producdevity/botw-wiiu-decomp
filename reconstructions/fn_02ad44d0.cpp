extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027cae44(void*, const void*);

extern "C" void* fn_02ad44d0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(260, allocator, 4);
    if (object) {
        object = fn_027cae44(object, descriptor);
    }
    return object;
}
