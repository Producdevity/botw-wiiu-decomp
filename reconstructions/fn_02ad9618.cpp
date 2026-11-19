extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02912d28(void*, const void*);

extern "C" void* fn_02ad9618(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_02912d28(object, descriptor);
    }
    return object;
}
