extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029dfc20(void*, const void*);

extern "C" void* fn_02ae0064(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_029dfc20(object, descriptor);
    }
    return object;
}
