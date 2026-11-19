extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_033292c8(void*, const void*);

extern "C" void* fn_02ac8bac(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(84, allocator, 4);
    if (object) {
        object = fn_033292c8(object, descriptor);
    }
    return object;
}
