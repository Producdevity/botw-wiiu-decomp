extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020bed44(void*, const void*);

extern "C" void* fn_02aad0f0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(148, allocator, 4);
    if (object) {
        object = fn_020bed44(object, descriptor);
    }
    return object;
}
