extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021fe910(void*, const void*);

extern "C" void* fn_02ab6528(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_021fe910(object, descriptor);
    }
    return object;
}
