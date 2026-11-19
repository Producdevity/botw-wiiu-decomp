extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0225a6f8(void*, const void*);

extern "C" void* fn_02ab8e98(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(320, allocator, 4);
    if (object) {
        object = fn_0225a6f8(object, descriptor);
    }
    return object;
}
