extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029c2504(void*, const void*);

extern "C" void* fn_02ade2e8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(56, allocator, 4);
    if (object) {
        object = fn_029c2504(object, descriptor);
    }
    return object;
}
