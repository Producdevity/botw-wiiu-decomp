extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02418dc0(void*, const void*);

extern "C" void* fn_02ac5cb8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(196, allocator, 4);
    if (object) {
        object = fn_02418dc0(object, descriptor);
    }
    return object;
}
