extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02658280(void*, const void*);

extern "C" void* fn_02acfa2c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_02658280(object, descriptor);
    }
    return object;
}
