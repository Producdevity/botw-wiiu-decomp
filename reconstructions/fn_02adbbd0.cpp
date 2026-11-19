extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029a2fd8(void*, const void*);

extern "C" void* fn_02adbbd0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(376, allocator, 4);
    if (object) {
        object = fn_029a2fd8(object, descriptor);
    }
    return object;
}
