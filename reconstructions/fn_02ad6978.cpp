extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02853a18(void*, const void*);

extern "C" void* fn_02ad6978(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_02853a18(object, descriptor);
    }
    return object;
}
