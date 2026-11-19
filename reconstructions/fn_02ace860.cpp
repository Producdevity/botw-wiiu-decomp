extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02615f10(void*, const void*);

extern "C" void* fn_02ace860(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_02615f10(object, descriptor);
    }
    return object;
}
