extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02409810(void*, const void*);

extern "C" void* fn_02ac5768(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(232, allocator, 4);
    if (object) {
        object = fn_02409810(object, descriptor);
    }
    return object;
}
