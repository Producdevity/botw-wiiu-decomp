extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02820be8(void*, const void*);

extern "C" void* fn_02ad5cb8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(84, allocator, 4);
    if (object) {
        object = fn_02820be8(object, descriptor);
    }
    return object;
}
