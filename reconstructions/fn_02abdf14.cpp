extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02332390(void*, const void*);

extern "C" void* fn_02abdf14(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(172, allocator, 4);
    if (object) {
        object = fn_02332390(object, descriptor);
    }
    return object;
}
