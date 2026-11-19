extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0265bf94(void*, const void*);

extern "C" void* fn_02acfc90(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_0265bf94(object, descriptor);
    }
    return object;
}
