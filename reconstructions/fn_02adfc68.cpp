extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029da2fc(void*, const void*);

extern "C" void* fn_02adfc68(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_029da2fc(object, descriptor);
    }
    return object;
}
