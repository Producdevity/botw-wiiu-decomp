extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0224c5c0(void*, const void*);

extern "C" void* fn_02ab82a4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(84, allocator, 4);
    if (object) {
        object = fn_0224c5c0(object, descriptor);
    }
    return object;
}
