extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0223cf98(void*, const void*);

extern "C" void* fn_02ab83f8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(96, allocator, 4);
    if (object) {
        object = fn_0223cf98(object, descriptor);
    }
    return object;
}
