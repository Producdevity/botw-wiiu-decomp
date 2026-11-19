extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0237a040(void*, const void*);

extern "C" void* fn_02ac22d0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_0237a040(object, descriptor);
    }
    return object;
}
