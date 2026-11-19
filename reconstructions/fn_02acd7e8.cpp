extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025bed50(void*, const void*);

extern "C" void* fn_02acd7e8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(140, allocator, 4);
    if (object) {
        object = fn_025bed50(object, descriptor);
    }
    return object;
}
