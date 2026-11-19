extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0237c8d4(void*, const void*);

extern "C" void* fn_02ac2424(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(120, allocator, 4);
    if (object) {
        object = fn_0237c8d4(object, descriptor);
    }
    return object;
}
