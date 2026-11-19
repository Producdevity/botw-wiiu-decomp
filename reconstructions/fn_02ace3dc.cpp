extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02605834(void*, const void*);

extern "C" void* fn_02ace3dc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(124, allocator, 4);
    if (object) {
        object = fn_02605834(object, descriptor);
    }
    return object;
}
