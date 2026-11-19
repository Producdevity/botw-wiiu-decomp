extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02789258(void*, const void*);

extern "C" void* fn_02ad39ec(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(80, allocator, 4);
    if (object) {
        object = fn_02789258(object, descriptor);
    }
    return object;
}
