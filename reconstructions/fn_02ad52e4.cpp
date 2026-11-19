extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027ebe6c(void*, const void*);

extern "C" void* fn_02ad52e4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(52, allocator, 4);
    if (object) {
        object = fn_027ebe6c(object, descriptor);
    }
    return object;
}
