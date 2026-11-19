extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029d7fd0(void*, const void*);

extern "C" void* fn_02adf9c0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_029d7fd0(object, descriptor);
    }
    return object;
}
