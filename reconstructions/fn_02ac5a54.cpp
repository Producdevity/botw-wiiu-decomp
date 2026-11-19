extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02411568(void*, const void*);

extern "C" void* fn_02ac5a54(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(168, allocator, 4);
    if (object) {
        object = fn_02411568(object, descriptor);
    }
    return object;
}
