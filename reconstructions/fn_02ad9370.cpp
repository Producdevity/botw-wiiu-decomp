extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029082c4(void*, const void*);

extern "C" void* fn_02ad9370(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(444, allocator, 4);
    if (object) {
        object = fn_029082c4(object, descriptor);
    }
    return object;
}
