extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0238dbd4(void*, const void*);

extern "C" void* fn_02ac2ac8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(296, allocator, 4);
    if (object) {
        object = fn_0238dbd4(object, descriptor);
    }
    return object;
}
