extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0233c490(void*, const void*);

extern "C" void* fn_02abd8b4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_0233c490(object, descriptor);
    }
    return object;
}
