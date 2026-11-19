extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02cfa4c0(void*, const void*);

extern "C" void* fn_02ac18b8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_02cfa4c0(object, descriptor);
    }
    return object;
}
