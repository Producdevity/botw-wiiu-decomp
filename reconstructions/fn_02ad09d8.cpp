extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02699da0(void*, const void*);

extern "C" void* fn_02ad09d8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(616, allocator, 4);
    if (object) {
        object = fn_02699da0(object, descriptor);
    }
    return object;
}
