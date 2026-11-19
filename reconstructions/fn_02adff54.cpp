extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029de3b8(void*, const void*);

extern "C" void* fn_02adff54(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(220, allocator, 4);
    if (object) {
        object = fn_029de3b8(object, descriptor);
    }
    return object;
}
